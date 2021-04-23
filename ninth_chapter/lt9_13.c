#include <stdio.h>
#define N 5
void bubbleSort(int a[], int n)
{
    int i, j, t;
    for (i = 1; i < N; i++)
        for (j = 0; j < N - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}
int main()
{
    int i, A[N];
    printf("请输入%d个整数:\n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);
    bubbleSort(A, N);
    printf("这%d个整数按从小到大的顺序排列为:\n", N);
    for (i = 0; i < N; i++)
        printf("%5d", A[i]);
    return 0;
}