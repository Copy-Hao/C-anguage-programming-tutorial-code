#include <stdio.h>
void disp(int n)
{
    printf("%4d\t", n);
}
int main()
{
    int i, score[6];
    printf("请输入一学生6门课的成绩:\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &score[i]);
    printf("学生6门课程的成绩依次为：\n");
    for (i = 0; i < 6; i++)
        disp(score[i]);
    return 0;
}