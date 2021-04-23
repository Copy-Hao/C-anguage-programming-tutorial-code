#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char ch;
    FILE *fp;
    int i;
    printf("%s", argv[1]);
    if (argc == 1)
    {
        printf("No file name!");
    }
    else if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    while ((ch = fgetc(fp) != EOF))
        putchar(ch);
    fclose(fp);
    return 0;
}