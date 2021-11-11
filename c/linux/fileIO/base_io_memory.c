/*
*同一个进程内，多次打开同一个文件，并不存在多份动态文件
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int aargc,char **argv)
{
    char buff[4];
    int fd1,fd2;
    int ret;

    //创建新文件
    fd1=open("memory.txt",O_RDWR|O_CREAT|O_EXCL,S_IRWXU);
    if(-1==fd1)
    {
        perror("Create file failed");
        exit(-1);
    }

    fd2=open("memory.txt",O_RDONLY);
    if(-1==fd2)
    {
        perror("Open file failed");
        ret=-1;
        goto error1;
    }

    buff[0]=0x01;
    buff[1]=0x02;
    buff[2]=0x03;
    buff[3]=0x04;
    ret=write(fd1,buff,sizeof(buff));
    if(-1==ret)
    {
        perror("Write file failed");
        goto error2;
    }

    ret=lseek(fd2,0,SEEK_SET);
    if(-1==ret)
    {
        perror("Offset failed");
        goto error2;
    }

    memset(buff,0x00,sizeof(buff));
    ret=read(fd2,buff,sizeof(buff));
    if(-1==ret)
    {
        perror("Read file failed");
        goto error2;
    }

    printf("0x%x 0x%x 0x%x 0x%x\n",buff[0],buff[1],buff[2],buff[3]);
    ret=0;
    error2:
    close(fd2);
    error1:
    close(fd1);
    exit(ret);
}