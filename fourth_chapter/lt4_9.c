#include <stdio.h>
int main()
{
    int x = 1, y = 2;
    {
        int x = 10;
        x += 10;
        printf("x=%d,", x);
        printf("y=%d,", y);
    }
    x += 9;
    printf("x=%d\n", x);
    return 0;
}