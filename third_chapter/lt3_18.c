#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, flag = 1;
    scanf("%d", &x);
    for (n = 2; n < x - 1; n++)
        if (x % n == 0)
            flag = 0;
    if (flag == 1)
        printf("%d是素数\n", x);
    else
        printf("%d不是素数\n", x);
    return 0;
}