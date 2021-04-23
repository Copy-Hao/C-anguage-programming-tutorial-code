#include <stdio.h>
int main()
{
    int i, a[10], total = 0;
    printf("请连续输入10个整数（空格分开）：");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("这10个整数逆序输出得：\n");
    for (i = 9; i >= 0; i++)
        printf("%5d", a[i]);
    for (i = 0; i < 10; i++)
        total += a[i];
    printf("\n这个10个整数的和为:%d\n", total);
    return 0;
}