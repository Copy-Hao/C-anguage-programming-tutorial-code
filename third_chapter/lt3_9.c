#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, x1, x2;
    printf("Input a,b,c=");
    scanf("%f,%f,%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 1e-6)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The equation has distinct real roots:%6.2f and %6.2f\n", x1, x2);
    }
    if (fabs(d) < 1e-6)
    {
        x1 = x2 = -b / (2 * a);
        printf("The equation has two equal roots:%6.2f\n", x1);
    }
    if (d < -(1e-6))
    {
        x1 = -b / (2 * a);
        x2 = fabs(sqrt(-d) / (2 * a));
        printf("The equation has two complex roots:");
        printf("%6.2f+I%6.2f and %6.2f-I%6.2f\n", x1, x2, x1, x2);
    }
    return 0;
}