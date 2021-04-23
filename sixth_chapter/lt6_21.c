#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    int (*p)(int, int);
    int a, b, sum;
    p = add;
    scanf("%d %d", &a, &b);
    sum = (*p)(a, b);
    printf("a=%d,b=%d,a+b=%d", a, b, sum);
    return 0;
}