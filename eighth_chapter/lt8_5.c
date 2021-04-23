#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char string[11];
    if ((fp = fopen("C:\\Users\\10365\\Desktop\\C_codes\\eighth_chapter\\test.txt", "r+")) == NULL)
    {
        printf("Cannot open file!");
        exit(0);
    }
    fgets(string, 11, fp);
    printf("%s", string);
    fclose(fp);
    return 0;
}