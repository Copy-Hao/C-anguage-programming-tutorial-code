#include <stdio.h>
#include <string.h>
#define format "%d\n%s\n%5.2f\n%5.2f\n"
struct student
{
    int num;
    char name[20];
    float score[3];
};
int main()
{
    void print(struct student *);
    struct student stu;
    stu.num = 23;
    strcpy(stu.name, "Li Ming");
    stu.score[0] = 75.5;
    stu.score[1] = 91;
    stu.score[2] = 76.5;
    print(&stu);
    return 0;
}
void print(struct student *p)
{
    printf(format, p->num, p->name, p->score[0], p->score[1], p->score[2]);
    printf("\n");
}