#include <stdio.h>
int main()
{
    int s, n;
    s = 0, n = 0;
    do
    {
        n++;
        s = s + n * n;
    } while (s <= 1000);
    printf("n=%d\n", n - 1);
    return 0;
}