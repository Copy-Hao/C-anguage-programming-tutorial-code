#include <stdio.h>
void string_copy(char *dest, char *source)
{
    int i = 0;
    for (; (*(dest + i) = *(source + i)) != '\0'; i++)
        ;
    printf("函数调用后,[形参]变量的值\n");
    printf("source=\"%s\"\n", source);
    printf("dest=\"%s\"\n", dest);
}
int main()
{
    char str1[20] = "I am a student";
    char str2[20];
    string_copy(str2, str1);
    printf("函数调用后,[实参]变量的值\n");
    printf("str1=\"%s\"\n", str1);
    printf("str2=\"%s\"\n", str2);
    return 0;
}