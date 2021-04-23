#include <stdio.h>
int main()
{
    long int x, newd = 0;
    int t;
    scanf("%ld", &x);
    do
    {
        t = x % 10;
        newd = newd * 10 + t;
        x = x / 10;
    } while (x > 0);
    printf("%ld\n", newd);
    return 0;
}