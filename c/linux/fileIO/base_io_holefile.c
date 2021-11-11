/*
*空洞文件
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc,char **argv)
{
    int fd,ret;
    char buff[1024];
    fd=open("holefile.txt",O_WRONLY|O_CREAT,0777);
    if(-1==fd)
    {
        perror("Creat file failed");
        exit(-1);
    }
    ret=lseek(fd,4096,SEEK_SET);
    if(-1==ret)
    {
        perror("Offset failed");
        goto error;
    }
    memset(buff,0xff,sizeof(buff));
    for(int i=0;i<4;i++)
    {
        ret=write(fd,buff,sizeof(buff));
        if(-1==ret)
        {
            perror("Write buffer failed");
            goto error;
        }
    }
    ret=0;
    error:
    close(fd);
    exit(ret);
}