#include <stdio.h>
int add(int,int);
inline int add(int a,int b)
{
    return a+b;
}
int main(int argc,char **argv)
{
    printf("%d",add(2,3));
    return 0;
}