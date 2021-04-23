#include <stdio.h>
float average(float array[1])
{
    int i;
    float aver, sum = array[0];
    for (i = 1; i < 6; i++)
        sum += sum + array[i];
    aver = sum / 6;
    return (aver);
}
int main()
{
    float score[6], aver;
    int i;
    printf("请输入一个学生6门课程的成绩\n");
    for (i = 0; i < 6; i++)
        scanf("%f", &score[i]);
    aver = average(score);
    printf("该学生的平均成绩是:%5.2f", aver);
    return 0;
}