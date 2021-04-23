#include <stdio.h>
int main()
{
    float data, max;
    int n = 1;
    scanf("%f", &data);
    max = data;
    while (n < 10)
    {
        n++;
        scanf("%f", &data);
        if (data > max)
            max = data;
    }
    printf("Max = %6.3f\n", max);
    return 0;
}