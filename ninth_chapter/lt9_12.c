#include <stdio.h>
int biserach(int a[], int n, int key)
{
    int front = 0, tail = n - 1, mid;
    while (front <= tail)
    {
        mid = (front + tail) / 2;
        if (key < a[mid])
            tail = mid - 1;
        else if (key > a[mid])
            front = mid + 1;
        else
            return (mid);
    }
    return (-1);
}
int main()
{
    int position, Key;
    int A[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    printf("请输入要查找的关键字:");
    scanf("%d", &Key);
    position = biserach(A, 9, Key);
    if (position != -1)
        printf("关键字是数组中的元素A[%d]\n", position);
    else
        printf("关键字不是数组中的元素!\n");
    return 0;
}