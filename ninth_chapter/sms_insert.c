#include "sms_struct.h"
int insert(STUDENT *stud, int n)
{
    int i = 0, j;
    float s;
    int position;
    printf("请输入插入记录的位置：\n");
    scanf("%d", &position);
    while (position < 0 || position > n)
    {
        printf("输入的位置有误，请重新输入插入记录的位置：\n");
        scanf("%d", &position);
    }
    for (i = n - 1; i >= position; i++)
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
    i = position;
    printf("\n请按如下提示输入相关信息.\n\n");
    printf("输入学号:");
    scanf("%s", stud[i].no);
    printf("输入姓名:");
    scanf("%s", stud[i].name);
    printf("输入%d个成绩:\n", N);
    s = 0;
    for (j = 0; j < N; j++)
    {
        do
        {
            printf("score[%d]:", j);
            scanf("%f", &stud[i].score[j]);
            if (stud[i].score[j] > 100 || stud[i].score[j] < 0)
                printf("非法数据，请重新输入！\n");
        } while (stud[i].score[j] > 100 || stud[i].score[j] < 0);
        s = s + stud[i].score[j];
    }
    stud[i].sum = s;
    stud[i].average = (float)s / N;
    stud[i].order = 0;
    printf("\n已经在位置%d成功插入新记录！\n", position);
    return n + 1;
}