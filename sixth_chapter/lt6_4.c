#include <stdio.h>
#define M 2
#define N 5
int main()
{
    int a[M][N], max, i, j;
    int *p = &a[0][0];
    printf("请输入数组中各个元素的值:\n");
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            scanf("%d", p++);
    max = a[0][0];
    p = &a[0][0];
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            if (max < *(p + i * N + j))
                max = *(p + i * N + j);
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%5d", *(p + i * N + j));
        printf("\n");
    }
    printf("数组中最大的值为:%d", max);
    return 0;
}