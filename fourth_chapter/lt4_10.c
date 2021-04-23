#include <stdio.h>
#include <math.h>
float x1, x2;
void f1(float a, float b, float c)
{
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}
void f2(float a, float b)
{
    x1 = x2 = -b / (2 * a);
}
void f3(float a, float b, float c)
{
    x1 = -b / (2 * a);
    x2 = sqrt(4 * a * c - b * b) / (2 * a);
}
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (b * b - 4 * a * c > 1e-5)
    {
        f1(a, b, c);
        printf("x1=%f,x2=%f\n", x1, x2);
    }
    else if (fabs(b * b - 4 * a * c) < 1e-5)
    {
        f2(a, b);
        printf("x1=x2=%f\n", x1);
    }
    else
    {
        f3(a, b, c);
        printf("x=%f+I%f,x2=%f-I%f\n", x1, fabs(x2), x1, fabs(x2));
    }
    return 0;
}