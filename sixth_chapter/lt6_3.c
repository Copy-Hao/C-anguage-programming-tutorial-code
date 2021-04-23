#include <stdio.h>
int main()
{
    int a[6] = {11, 22, 33, 44, 55, 66};
    int *p;
    for (p = a; p < a + 6; p++)
        printf("%4d", *p);
    return 0;
}