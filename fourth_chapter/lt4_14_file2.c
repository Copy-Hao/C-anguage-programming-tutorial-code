#include <stdio.h>
#include "lt4_14_file1.c"
extern int a;
// int b;
int main()
{
    func();
    printf("a=%d,b=%d\n", a, b);
    return 0;
}