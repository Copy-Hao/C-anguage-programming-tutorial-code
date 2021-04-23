#include <stdio.h>
int main()
{
    char *p = "Gold medal";
    while (*p != '\0')
        printf("%c", *p++);
    return 0;
}