#include <stdio.h>
#include <stdalign.h>
//#pragma pack(4)
struct ss{
    char a;
    long c;
 }__attribute__((packed));
//#pragma pack()
int main()
{
    struct ss s={
        .a=1,
        .c=12
    };
    printf("char=%ld  int=%ld  long=%ld\n",sizeof(char),sizeof(int),sizeof(long));
    printf("sizeof(s)=%ld,alignof(s)=%ld\n",sizeof(s),alignof(s));
}
