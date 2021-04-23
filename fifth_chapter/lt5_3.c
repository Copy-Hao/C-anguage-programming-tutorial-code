#include <stdio.h>
int main()
{
    float score[3][20], sum[3] = {0, 0, 0}, aver[3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("请输入第%d个班20个人的成绩:\n", i + 1);
        for (j = 0; j < 20; j++)
        {
            scanf("%f", &score[i][j]);
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 20; j++)
                sum[i] = sum[i] + score[i][j];
            aver[i] = sum[i] / 20;
            printf("第%d个班的英语平均成绩为%f\n", i + 1, aver[i]);
        }
        return 0;
    }
}