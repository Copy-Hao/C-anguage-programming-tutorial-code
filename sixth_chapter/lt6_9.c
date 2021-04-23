#include <stdio.h>
int main()
{
    int a, b, c, sum;
    int *p[3];
    a = 10;
    b = 20;
    c = 30;
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    p[0] = &a;
    p[1] = &b;
    p[3] = &c;
    printf("*p[0]=%d,*p[1]=%d,*p[2]=%d\n", *p[0], *p[1], *p[2]);
    sum = *p[0] + *p[1] + *p[2];
    printf("*p[0]=+*p[1]+*p[2]=%d\n", sum);
    (*p[0])++;
    printf("a=%d,*p[0]=%d\n", a, *p[0]);
    return 0;
}