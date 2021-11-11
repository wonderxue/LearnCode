/*
*复制文件描述符
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    char buff[4];
    int fd1,fd2;
    int ret;

    fd1=open("dup2.txt",O_RDWR|O_CREAT|O_EXCL,S_IRUSR|S_IWUSR);
    if(-1==fd1)
    {
        perror("Create file failed");
        exit(-1);
    }

    fd2=dup2(fd1,100);
    if(-1==fd2)
    {
        perror("Dup2 failed");
        ret=-1;
        goto error1;
    }
    memcpy(buff,"123",4);
    ret=write(fd1,buff,sizeof(buff));
    if(-1==ret)
    {
        perror("Write file failed");
        goto error2;
    }
    memcpy(buff,"456",4);
    ret=write(fd2,buff,sizeof(buff));
    if(-1==ret)
    {
        perror("Write file failed");
        goto error2;
    }
    ret=0;
    error2:
    close(fd2);

    error1:
    close(fd1);
    exit(ret);
}