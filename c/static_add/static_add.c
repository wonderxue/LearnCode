#include "common.h"
#include <stdarg.h>
#include <stdio.h>
int add(int num,...)
{
    va_list valist;
    int sum=0;
    va_start(valist,num);
    for(int i=0;i<num;i++)
    sum+=va_arg(valist,int);
    printf("static lib\n");
    return sum;
}