#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    scanf("%f", &x);
    if (x < 0)
        y = x;
    else if (x <= 1)
        y = exp(x);
    else if (x < 10)
        y = log10(x);
    else
        y = sin(x);
    printf("Y=%6.2f\n", y);
    return 0;
}