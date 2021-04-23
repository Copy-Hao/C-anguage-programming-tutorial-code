#include <stdio.h>
int main()
{
    int x, y, max;
    printf("Input x,y=");
    scanf("%d,%d", &x, &y);
    if (x > y)
        max = x;
    else
        max = y;
    printf("Max=%d\n", max);
    return 0;
}