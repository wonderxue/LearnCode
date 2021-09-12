#include <stdio.h>
#include <stdalign.h>
#pragma message("sdsada")
struct ss{
    char a;
    long c;
 }__attribute__((packed));//__attribute__((__aligned__(1)));
int main()
{
    struct ss s={
        .a=1,
        .c=12
    };
    printf("char=%ld  int=%ld  long=%ld\n",sizeof(char),sizeof(int),sizeof(long));
    printf("sizeof(s)=%ld,alignof(s)=%ld\n",sizeof(s),alignof(s));
}