#include <stdio.h>
int main()
{
    int n, x, temp, t, count = 0;
    for (n = 1; n <= 1000; n++)
    {
        temp = 0;
        x = n;
        do
        {
            t = x % 10;
            temp = temp * 10 + t;
            x = x / 10;
        } while (x > 0);
        if (temp == n)
        {
            printf("%5d", n);
            count++;
        }
    }
    printf("\ncount=%d\n", count);
    return 0;
}