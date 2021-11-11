/*
*简单的文件读写操作
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    char buff[1024];
    int fd1, fd2;
    int ret;

    fd1 = open("./src.txt", O_RDONLY);
    if (-1 == fd1)
    {
        printf("open1 error\n");
        return fd1;
    }

    fd2 = open("./dest.txt", O_WRONLY);
    if (-1 == fd2)
    {
        printf("open2 error\n");
        ret = fd2;
        goto out1;
    }

    ret = read(fd1, buff, sizeof(buff));
    if (-1 == ret)
    {
        printf("read1 error\n");
        goto out2;
    }

    ret = write(fd2, buff, sizeof(buff));
    if (-1 == ret)
    {
        printf("write error\n");
        goto out2;
    }
    int off_s=lseek(fd2,4,SEEK_CUR);
    if (-1 == off_s)
    {
        printf("offset error\n");
    }
    ret=write(fd2,"wo",3);
    if (-1 == ret)
    {
        printf("write error\n");
        goto out2;
    }
    //测试
    // int fd3=open("hh1.txt",O_CREAT,S_IRUSR|S_IWUSR);
    // if(-1==fd3)
    // {
    //     printf("hhhh\n");
    // }
    // close(fd3);
    ret = 0;

out2:
    close(fd2);
out1:
    close(fd1);
    return ret;
}