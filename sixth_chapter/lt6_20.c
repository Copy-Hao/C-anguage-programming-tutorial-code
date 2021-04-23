#include <stdio.h>
int number[2] = {0, 0};
int *word_blank_num(char *s)
{
    int is_word = 0;
    for (; (*s) != '\0'; s++)
        if (*s == ' ')
        {
            is_word = 0;
            number[1]++;
        }
        else if (is_word == 0)
        {
            is_word = 1;
            number[0]++;
        }
    return number;
}
int main()
{
    char string[100];
    int *p;
    printf("请输入一行字符:\n");
    gets(string);
    p = word_blank_num(string);
    printf("该行字符中的单词个数为：%d\n", p[0]);
    printf("该行字符中的空格个数为：%d\n", p[1]);
    return 0;
}