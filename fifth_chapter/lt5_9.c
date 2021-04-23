#include <stdio.h>
void display(int a[3][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; i < 4; j++)
        {
            printf("%8d", a[i][j]);
        }
        printf("\n");
    }
}
int findMax(int a[3][4])
{
    int i, j, max;
    max = a[0][0];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    return max;
}
float average(int a[3][4])
{
    int i, j;
    float sum = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }
    return sum / 12;
}
int main()
{
    int i, j, score[3][4], b;
    float c;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
        {
            printf("score[%d][%d]=", i, j);
            scanf("%d", &score[i][j]);
        }
    display(score);
    b = findMax(score);
    c = average(score);
    printf("最大成绩为%d\n", b);
    printf("平均成绩为%.2f\n", c);
    return 0;
}