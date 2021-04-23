#include <stdio.h>
int main()
{
    int s, n;
    for (s = 0, n = 1;; n++)
    {
        s += n;
        if (n >= 100)
            break;
    }
    printf("%d\n", s);
    return 0;
}