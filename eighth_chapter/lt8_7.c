#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp1, *fp2;
    char str[128];
    if ((fp1 = fopen("C:\\Users\\10365\\Desktop\\C_codes\\eighth_chapter\\test.txt", "r")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    if ((fp2 = fopen("C:\\Users\\10365\\Desktop\\C_codes\\eighth_chapter\\test1.text", "w")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    while (fgets(str, 128, fp1) != NULL)
    {
        fputs(str, fp2);
        printf("%s", str);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}