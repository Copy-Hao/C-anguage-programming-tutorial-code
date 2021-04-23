#include <stdio.h>
unsigned long fact(int n)
{
    unsigned long p;
    if (n == 1)
        p = 1;
    else
        p = n * fact(n - 1);
    return p;
}
int main()
{
    int n;
    unsigned long p;
    scanf("%d", &n);
    p = fact(n);
    printf("%d!=%lu\n", n, p);
    return 0;
}