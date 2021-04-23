#include <stdio.h>
long strToLong(char s[])
{
    int flag = 0, i = 0;
    long n = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '-')
            flag = 1;
        else if (s[i] == '+')
            flag = 0;
        else
            n = n * 10 + (s[i] - '0');
        i++;
    }
    if (flag == 1)
        n = -n;
    return n;
}
int main()
{
    long num;
    char str[] = "98765432";
    num = strToLong(str);
    printf("由字符串“%s”转换成长整数为%ld\n", str, num);
    return 0;
}