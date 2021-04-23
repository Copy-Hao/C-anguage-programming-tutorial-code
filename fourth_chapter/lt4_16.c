#include <stdio.h>
#define PI 3.1415926
int main()
{
    float s, v, r;
    scanf("%f", &r);
    s = 4 * PI * r * r;
    v = 4 * PI * r * r * r / 3;
    printf("Area=%f,Volume=%f\n", s, v);
    return 0;
}