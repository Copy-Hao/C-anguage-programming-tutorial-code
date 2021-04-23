#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    long int fun(int n);
    for (n = 1; n <= 10; n++)
        sum += 1 / fun(n);
    printf("%6.3f", sum);
    return 0;
}
long int fun(int n)
{
    int k = 1;
    long int p = 1;
    for (k = 1; k <= n; k++)
        p = p * k;
    return p;
}