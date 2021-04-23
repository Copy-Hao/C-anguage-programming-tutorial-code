// file1.c
#include <stdio.h>
int a = 2;
static int b = 3;
void func()
{
    a++;
    b++;
    printf("a=%d,b=%d\n", a, b);
}