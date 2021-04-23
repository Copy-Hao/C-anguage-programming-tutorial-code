#include <stdio.h>
int main()
{
    int n = 1, s = 0;
    while (n <= 100)
    {
        s = s + n;
        n += 1;
    }
    printf("s=%d\n", s);
    return 0;
}