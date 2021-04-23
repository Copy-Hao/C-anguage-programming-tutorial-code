#include <stdio.h>
int strlength(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
int main()
{
    char s[100];
    printf("请输入一字符串：");
    gets(s);
    printf("您输入的字符串长度为：%d\n",strlength(s));
    return 0;
}