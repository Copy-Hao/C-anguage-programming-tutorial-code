#include <stdio.h>
int fun(int m, int n)
{
    int r;
    if (m < n)
    {
        r = m;
        m = n;
        n = r;
    }
    r = m % n;
    while (r)
    {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}
int main()
{
    int x, y, z;
    scanf("%d,%d", &x, &y);
    z = fun(x, y);
    printf("最大公因子为:%d", z);
    return 0;
}