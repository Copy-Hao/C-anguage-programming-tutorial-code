#include "sms_struct.h"
int Delete(STUDENT *stud, int n)
{
    int i = 0;
    char k[5];
    char s[15];
    printf("请输入要删除的学生的姓名:\n");
    scanf("%s", s);
    while (i < n && strcmp(stud[i].name, s))
        i++;
    if (i == n)
        printf("\n您要删除的是%s，很遗憾，查无此人！\n", s);
    else
    {
        printf("* * * * * * * * * * Found * * * * * * * * * *\n");
        printf("%-11s%-15s%5.2f%7.2f%9.2f%6.2f%3d\n",
               stud[i].no, stud[i].name, stud[i].score[0], stud[i].score[1], stud[i].score[2], stud[i].sum, stud[i].average, stud[i].order);
        printf("* * * * * * * * * * * * * * * * * * * *\n");
        do
        {
            printf("您确定要删除此记录吗？(y/n)");
        } while (k[0] != 'y' && k[0] != 'n');
        if (k[0] != 'n')
        {
            for (; i < n; i++)
            {
                strcpy(stud[i + 1].no, stud[i].no);
                strcpy(stud[i + 1].name, stud[i].name);
                stud[i + 1].score[0] = stud[i].score[0];
                stud[i + 1].score[1] = stud[i].score[1];
                stud[i + 1].score[2] = stud[i].score[2];
                stud[i + 1].sum = stud[i].sum;
                stud[i + 1].average = stud[i].average;
                stud[i + 1].order = stud[i].order;
            }
            printf("\n已经成功删除姓名为%s的学生的记录！\n", s);
        }
    }
    return n - 1;
}