#include "sms_struct.h"

void search(STUDENT *stud, int n)
{
    int i = 0;
    char s[15];
    printf("请输入您要查找的学生姓名：\n");
    scanf("%s", s);
    while (i < n && strcmp(stud[i].name, s))
    {
        i++;
    }
    if (i == n)
        printf("\n您要查找的是%s,很遗憾，查无此人!\n", s);
    else
    {
        printf("* * * * * * * * * * Found * * * * * * * * * *\n");
        printf("%-11s%-15s%5.2f%7.2f%9.2f%6.2f%3d\n",
               stud[i].no, stud[i].name, stud[i].score[0], stud[i].score[1], stud[i].score[2], stud[i].sum, stud[i].average, stud[i].order);
        printf("* * * * * * * * * * * * * * * * * * * *\n");
    }
}