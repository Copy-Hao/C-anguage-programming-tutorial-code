#include <stdio.h>
int main()
{
    double a = 1.234567890123456789e18;
    float b = a;
    printf("a=%.20le\n", a);
    printf("b=%.20le\n", b);
    return 0;
}