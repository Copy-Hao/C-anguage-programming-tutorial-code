#include <stdio.h>
int str_length(char *str)
{
    int i;
    printf("参数传递后，[形参]指针指向的字符串为\n");
    for (i = 0; str[i] != '\0'; i++)
        ;
    printf("str=\"%s\"\n", str);
    return i;
}
int main()
{
    int x;
    char *string = {"I am a student."};
    printf("函数调用时，[实参]指针指向的字符串为\n");
    printf("string=\"%s\"\n", string);
    x = str_length(string);
    printf("字符串的长度是:%d\n", x);
    return 0;
}