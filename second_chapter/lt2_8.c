#include <stdio.h>
int main()
{
    short a = -1;
    long b;
    unsigned long c;
    b = a;
    c = a;
    printf("a=%d b=%ld c=%lu\n", a, b, c);
    return 0;
}