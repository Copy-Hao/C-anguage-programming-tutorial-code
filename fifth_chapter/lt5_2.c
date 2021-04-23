#include <stdio.h>
int main()
{
    int flag = 0, i = 0;
    long num = 0;
    char str[] = {"-1688"};
    while (str[i] != '\0')
    {
        if (str[i] == '-')
            flag = 1;
        else if (str[i] == '+')
            flag = 0;
        else
            num = num * 10 + (str[i] - '0');
        i++;
    }
    if (flag == 1)
        num = -num;
    printf("由数字字符串转换成整数的是:%ld\n", num);
    return 0;
}