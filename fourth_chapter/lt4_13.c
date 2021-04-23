#include <stdio.h>
long int fun(int n)
{
    static long int s = 1;
    s *= n;
    return s;
}
int main()
{
    int n;
    long int p;
    for (n = 1; n <= 10; n++)
        p = fun(n);
    printf("%ld\n", p);
    return 0;
}