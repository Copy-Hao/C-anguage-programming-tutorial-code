#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1;
    char temp[5];
    int i;
    struct stu
    {
        char name[15];
        char num[6];
        float score[4];
    } stud;
    if ((fp1 = fopen("test.txt", "wb")) == NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    for (i = 0; i < 2; i++)
    {
        printf("input name:");
        gets(stud.name);
        printf("input num:");
        gets(stud.num);
        printf("input score1:");
        gets(temp);
        stud.score[0] = atof(temp);
        printf("input score2:");
        gets(temp);
        stud.score[1] = atof(temp);
        stud.score[2] = stud.score[0] + stud.score[1];
        stud.score[3] = stud.score[2] / 2;
        fwrite(&stud, sizeof(stud), 1, fp1);
    }
    fclose(fp1);
    if ((fp1 = fopen("test.txt", "rb")) == NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    printf("----------------------------------\n");
    printf("%-15s%-7s%-7s%-7s\n", "name", "num", "score1", "score2", "sum", "average");
    printf("----------------------------------\n");
    for (i = 0; i < 2; i++)
    {
        fread(&stud, sizeof(stud), 1, fp1);
        printf("%-15s%-7s%7.2f%7.2f%7.2f\n", stud.name, stud.num, stud.score[0], stud.score[1], stud.score[2], stud.score[3]);
    }
    fclose(fp1);
    return 0;
}