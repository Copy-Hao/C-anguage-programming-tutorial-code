#include <stdio.h>
#define N 10
void smp_seleSort(int a[], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[k])
                k = j;
        if (i != k)
        {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }
}
int main()
{
    int i, A[N];
    printf("请输入%d个整数:\n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);
    smp_seleSort(A, N);
    printf("排序后的输出为:\n");
    for (i = 0; i < N; i++)
        printf("%5d", A[i]);
    return 0;
}