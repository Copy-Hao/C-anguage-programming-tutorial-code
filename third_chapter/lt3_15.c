#include <stdio.h>
int main()
{
    float x, y;
    int z;
    scanf("%f", &x);
    z = (int)(x / 10);
    if (x < 0)
        z = -1;
    switch (z)
    {
    case -1:
        y = 0;
        break;
    case 0:
        y = x;
        break;
    case 1:
        y = 10;
        break;
    case 2:
    case 3:
        y = 0.5 * x + 20;
        break;
    default:
        break;
    }
}