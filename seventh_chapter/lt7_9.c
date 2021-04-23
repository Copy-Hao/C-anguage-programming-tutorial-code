#include <stdio.h>
union data
{
    short a;
    long b;
    double c;
    char d;
} y;
struct stud
{
    short i;
    long j;
    double k;
    char m;
} stu;
int main()
{
    printf("%d,%d", sizeof(union data), sizeof(struct stud));
    y.b = 0x12345678;
    printf("\n%x,%lx，y.a,y.b");
    return 0;
}