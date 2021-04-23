#include <stdio.h>
int main()
{
    float fun(float x, float y);
    printf("Sum=%f\n", fun(2, 5));
    return 0;
}
float fun(float x, float y)
{
    return x + y;
}