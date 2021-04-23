#include <stdio.h>
int main()
{
    int a[3] = {11, 22, 33};
    int *p = a, X;
    printf("给X赋值的语句执行前,p=%p\n", p);
    X = *p++;
    printf("X=%d\n", X);
    printf("给X赋值的语句执行后,p=%p\n", p);
    return 0;
}