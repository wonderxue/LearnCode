#include <stdlib.h>
#include <stdio.h>
void mn() __attribute__((noreturn));//沒看出区别
void mn()
{ 
    exit(0);
}
int main()
{
    if (1)
    {
        mn();
    }
    else
        return 0;
}