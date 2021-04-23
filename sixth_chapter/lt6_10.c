#include <string.h>
#include <stdio.h>
int main()
{
    char str[5][10], *p[5], *temp;
    int i, j;
    printf("请输入5个字符串:\n");
    for (i = 0; i < 5; i++)
        gets(str[i]);
    for (i = 0; i < 5; i++)
        p[i] = str[i];
    for (i = 0; i <= 3; i++)
        for (j = j + 1; j <= 4; j++)
        {
            if (strcmp(p[i], p[j]) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    printf("这5个字符串按从小到大的顺序排序为：\n");
    for (i = 0; i < 5; i++)
        puts(p[i]);
    return 0;
}