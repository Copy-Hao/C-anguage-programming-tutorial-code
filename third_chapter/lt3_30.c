#include <stdio.h>
int main()
{
    int n, count = 0, x;
    float avg = 0;
    for (n = 0; n < 10; n++)
    {
        if (x > 0)
        {
            scanf("%d", &x);
            continue;
        }
        count++;
    }
    if (count != 10)
        avg /= 10 - count;
    printf("Count=%d,average=%f\n", count, avg);
    return 0;
}