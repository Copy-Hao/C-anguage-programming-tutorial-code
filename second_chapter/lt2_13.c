#include <stdio.h>
int main()
{
    int r, h;
    double v;
    scanf("r=%d  h=%d", &r, &h);
    printf("r=%d h=%d\n", r, h);
    v = 3.14159 * r * r * h;
    printf("The volume is:%.5f\n", v);
    return 0;
}