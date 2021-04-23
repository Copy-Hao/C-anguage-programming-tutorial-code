#include "sms_struct.h"
input(STUDENT *stud, int n)
{
    int i, j;
    float s;
    char sign;
    i = 0;
    while (sign != 'n' && sign != 'N')
    {
        printf("\n请按如下提示输入相关信息.\n\n");
        printf("输入学号:");
        scanf("%s", stud[n + i].no);
        printf("请输入姓名:");
        scanf("%s", stud[n + i].name);
        printf("输入%d个成绩:\n", N);
        s = 0;
        for (j = 0; j < N; j++)
        {
            do
            {
                printf("score[%d]", j);
                if (stud[n + i].score[j] > 100 || stud[n + i].score[j] < 0)
                    printf("非法数据，请重新输入!\n");
            } while (stud[n + i].score[j] > 100 || stud[n + i].score[j] < 0);
        }
        stud[n + i].sum = s;
        stud[n + i].average = (float)s / N;
        stud[n + i].order = 0;
        printf("该学生的总分数为:%4.2f\n\t平均分为:%4.2f\n", stud[n + i].sum, stud[n + i].average);
        printf("====>提示：继续添加记录？(Y/N)");
        getchar();
        scanf("%c", &sign);
        i++;
    }
    return (n + i);
}