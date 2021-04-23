#include <stdio.h>
char *substr(char *s, int i, int j)
{
    int n, t;
    static char sub[100];
    char *q = sub;
    for (n = 0; s[n] != '\0'; n++)
        ;
    if (i > 0 && i < n - j + 1 && j > 0 && j <= n - i + 1)
    {
        for (t = 0; t < j; t++)
            q[t] = s[i + t - 1];
        q[t] = '\0';
        return (q);
    }
    else
        return (NULL);
}
int main()
{
    char str[100];
    int i, j;
    char *p;
    printf("求主串中从第i(>0)个位置开始的长度为j(>0)的字串：\n");
    printf("请首先输入主串：");
    gets(str);
    printf("请输入位置i和长度j的值:\n");
    printf("i=");
    scanf("%d", &i);
    printf("j=");
    scanf("%d", &j);
    p = substr(str, i, j);
    if (p)
        printf("求得的字串为:%s\n", p);
    else
        printf("主串中不存在该字串！\n");
    return 0;
}