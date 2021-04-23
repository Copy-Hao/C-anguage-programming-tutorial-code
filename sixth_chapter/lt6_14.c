#include <stdio.h>
int main()
{
    char *p = "Gold medal";
    int i, length = 0;
    printf("字符串\"");
    for (i = 0; *(p + i) != '\0'; i++)
    {
        printf("%c", *(p + i));
        length++;
    }
    printf("\"的长度为:%d\n", length);
    return 0;
}