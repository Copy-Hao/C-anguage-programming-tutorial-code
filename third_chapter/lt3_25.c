#include <stdio.h>
#include <math.h>
int main()
{
    float x = 1.5, x0, f, f1;
    int n = 0;
    do
    {
        n++;
        x0 = x;
        f = 3 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
    } while (fabs(x - x0) >= 1e-5);
    printf("The root is %8.5f,time is %d\n", x, n);
    return 0;
}