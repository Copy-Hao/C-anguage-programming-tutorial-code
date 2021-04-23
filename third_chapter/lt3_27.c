#include <stdio.h>
int main()
{
    int n, count = 0, sum = 0, x, flag, i;
    for (n = 2; n < 1000; n++)
    {
        flag = 1;
        for (i = 2; i <= n - 1; i++)
            if (n % i == 0)
                flag = 0;
        if (flag == 1)
        {
            count++;
            sum += n;
        }
    }
    printf("%d,%d\n", count, sum);
    return 0;
}