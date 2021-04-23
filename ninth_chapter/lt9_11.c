#include <stdio.h>
int search(int a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == key)
            return i;
    return -1;
}
int main()
{
    int position, Key;
    int A[10] = {2,
                 8,
                 13,
                 27,
                 55,
                 89,
                 73,
                 4,
                 11,
                 36};
    printf("请输入要查找的关键字:");
    scanf("%d", &Key);
    position = search(A, 10, Key);
    if (position != -1)
        printf("关键字是数组中的元素A[%d]\n", position);
    else
        printf("关键字不是数组中的元素!\n");
    return 0;
}