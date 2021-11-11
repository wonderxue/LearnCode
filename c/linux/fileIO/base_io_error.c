/*
*打印错误errno
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc,char **argv)
{
    int fd,ret;
    fd=open("12.txt",O_RDONLY);
    if(-1==fd)
    {
        perror("Read failed");
        printf("Read failed: %s",strerror(errno));
        ret=-1;
    }
    return ret;
}