#include "common.h"
#include <stdarg.h>
#include <stdio.h>
int sub(int num,...)
{
    va_list valist;
    va_start(valist,num);
    int sum=va_arg(valist,int);;
    for(int i=1;i<num;i++)
    sum-=va_arg(valist,int);
    printf("sub\n");
    return sum;
}