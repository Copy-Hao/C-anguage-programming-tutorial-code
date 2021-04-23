#include <stdio.h>
#define M 2
#define N 4
int main()
{
    int a[M][N], i, j;
    int max[M], col[M];
    int(*p)[N] = a;
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            printf("Please input a[%d][%d]", i, j);
            scanf("%d", *(p + i) + j);
        }
    for (i = 0; i < M; i++)
    {
        max[i] = *(*(p + i) + 0);
        col[i] = 0;
        for (j = 1; j < N; j++)
        {
            max[i] = *(*(p + i) + j);
            col[i] = j;
        }
    }
    for (i = 0; i < M; i++)
    {
        printf("max of line %d(", i);
        for (j = 0; j < N; j++)
            printf("%d", *(*(p + i) + j));
        printf(") is %d,position is %d\n", *(max + i), *(col + i));
    }
    return 0;
}