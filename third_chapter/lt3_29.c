#include <stdio.h>
int main()
{
    int n, x, k, sum = 0;
    for (k = 2; k < 1000; k++)
    {
        x = k;
        while (x > 0)
        {
            for (n = 2; n <= x - 1; n++)
                if (x % n == 0)
                    break;
            if (n == x)
                x = x / 10;
            else
                break;
        }
        if (x == 0)
            sum++;
    }
    printf("%d\n", sum);
    return 0;
}