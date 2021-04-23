#include <stdio.h>
int main()
{
    int x, y, r;
    scanf("%d,%d", &x, &y);
    if (x < y)
    {
        r = x;
        x = y;
        y = r;
    }
    for (r = x % y; r; r = x % y)
    {
        x = y;
        y = r;
    }
    printf("最大公因子为：%d\n", y);
    return 0;
}