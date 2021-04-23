#include <stdio.h>
int main()
{
    int i, flag;
    char str[128], c;
    FILE *fp;
    fp = fopen("test4", "wb+");
    for (flag = 1; flag;)
    {
        printf("Please input string:\n");
        gets(str);
        fprintf(fp, "%s", str);
        printf("continue? Y/N?");
        if (((c = getchar()) == 'N') || (c == 'n'))
            flag = 0;
        getchar();
    }
    fseek(fp, 0, 0);
    while (fscanf(fp, "%s", str) != EOF)
    {
        for (i = 0; str[i] != '\0'; i++)
            if ((str[i] >= 'a') && (str[i] <= 'z'))
                str[i] -= 32;
        printf("%s\n", str);
    }
    fclose(fp);
    return 0;
}