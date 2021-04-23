#include <stdio.h>
#define N1 4
#define N2 30
#define N3 6
int main()
{
    float score[N1][N2][N3], studav[N1][N2];
    int i, j, k;
    float sum;
    for (i = 0; i < N1; i++)
        for (j = 0; j < N3; j++)
            for (k = 0; k < N3; k++)
            {
                printf("请输入%d班学号为%d的学生的科目%d成绩score[%d][%d][%d]", i + 1, j + 1, k + 1, i, j, k);
                scanf("%f", &score[i][j][k]);
            }
    for (i = 0; i < N1; i++)
        for (j = 0; j < N2; j++)
        {
            sum = 0;
            for (k = 0; k < N3; k++)
                sum = sum + score[i][j][k];
            studav[i][j] = sum / N3;
            printf("%d班学号为%d的学生的平均成绩studav[%d][%d]为：%f\n", i + 1, j + 1, i, j, studav[i][j]);
        }
    return 0;
}