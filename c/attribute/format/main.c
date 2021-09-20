#include <stdio.h>
void pp(char* format,...) __attribute__((format(printf,1,2)));
void pp(char *a,...)
{
    
}
int main()
{
    pp("%d\n",12);//对的
    pp("%d","dsad");//错误
    return 0;
}