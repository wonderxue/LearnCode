#include <stdio.h>
extern int add(int,int) __attribute__((const));//不理解
int add(int a,int b)
{ 
    printf("adasd\n");
    return 2;
}
int main()
{
    printf("2+3=%d\n2+4=%d\n",add(2,3),add(2,4));
    return 0;
}