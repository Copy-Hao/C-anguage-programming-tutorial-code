#include <stdio.h>
int main()
{
    short i, j;
    short a[2][4] = {{80, 81, 82, 83},
                     {84, 85, 86, 87}};
    short(*p)[4] = a;
    printf("a=%p\n\n", a);
    printf("p=%p\n", p);
    printf("*p=%p\n", p);
    printf("a[0]=%p\n", a[0]);
    printf("&a[0]=%p\n", &a[0]);
    printf("&a[0][0]=%p\n", &a[0][0]);
    printf("**p=%d\n", **p);
    printf("a[0][0]=%d\n", a[0][0]);
    printf("p+1=%p\n", p + 1);
    printf("*(p+1)=%p\n", *(p + 1));
    printf("a[1]=%p\n", a[1]);
    printf("&a[1]=%p\n", &a[1]);
    printf("&a[1][0]=%p\n", &a[1][0]);
    printf("**(p+1)=%d\n", **(p + 1));
    printf("a[1][0]=%d\n", a[1][0]);
    printf("按行输出数组中各个元素：\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", *(*(p + i) + j));
        printf("\n");
    }
    return 0;
}