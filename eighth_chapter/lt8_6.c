#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch, str[128];
    if ((fp = fopen("C:\\Users\\10365\\Desktop\\C_codes\\eighth_chapter\\test.txt", "a+")) == NULL)
    {
        printf("cannot open file!");
        exit(0);
    }
    if ((strlen(gets(str))) != 0)
    {
        fputs(str, fp);
        fputs("\n", fp);
    }
    rewind(fp);
    ch = fgetc(fp);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
    return 0;
}