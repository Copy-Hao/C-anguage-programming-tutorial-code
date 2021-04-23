#include <stdio.h>
#include <math.h>

int main()
{
    float x0 = 1.5, x1;
    int n = 0;
    do
    {
        n++;
        x1 = x0;
        x0 = pow(x1 + 1, 1.0 / 3);
        printf("第%d次迭代后,近似根x0=%f\n", n, x0);
    } while (fabs(x1 - x0) > 1e-5);
    printf("满足精度要求的根为:%f,迭代次数为:%d\n", x0, n);
    return 0;
}