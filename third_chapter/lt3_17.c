#include <stdio.h>
int main()
{
    int s, n;
    for (s = 0, n = 1; n <= 100; n++)
        s += n;
    printf("%d\n", s);
    return 0;
}