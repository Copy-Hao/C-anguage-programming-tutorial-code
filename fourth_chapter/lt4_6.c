#include <stdio.h>
int f(int n, int m)
{
    int s;
    if (n == m)
        s = m;
    else
        s = n + f(n + 1, m);
    return s;
}
int main()
{
    int x, y;
    printf("Input x,y(x<y) ");
    scanf("%d,%d", &x, &y);
    printf("%d\n", f(x, y));
    return 0;
}