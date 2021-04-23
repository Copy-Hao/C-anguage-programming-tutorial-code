#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int i;
    struct stu1
    {
        char name[15];
        char num[6];
        float score[2];
    } stu;
    if ((fp = fopen("C:\\Users\\10365\\Desktop\\C_codes\\eighth_chapter\\test3.txt", "w")) == NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    printf("input data:\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%s %s %f %f", stu.name, &stu.score[0], &stu.score[1]);
        fprintf(fp, "%s %s %7.2f\n", stu.name, stu.num, stu.score[0], stu.score[1]);
    }
    fclose(fp);
    if ((fp = fopen("C:\\Users\\10365\\Desktop\\C_codes\\eighth_chapter\\test3.txt", "r")) == NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    printf("output from file:\n");
    while (fscanf(fp, "%s %s %f %f\n", stu.name, stu.num, stu.score[0], stu.score[1]) != EOF)
        printf("%s %s %7.2f %7.2f\n", stu.name, stu.num, stu.score[0], stu.score[1]);
    fclose(fp);
    return 0;
}