#include <stdlib.h>
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    if ((fp = fopen("test.txt", "w")) == NULL)
    {
        printf("cannot open file!\n");
        exit(0);
    }
    while ((ch = getchar()) != '\n')
    {
        putchar(ch);
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}