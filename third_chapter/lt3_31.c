#include <stdio.h>
int main()
{
    int n = 1, s = 0;
loop:
    if (n < 100)
    {
        s = s + n;
        n++;
        goto loop;
    }
    printf("%d\n", s);
    return 0;
}