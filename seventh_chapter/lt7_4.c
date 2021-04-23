#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    char department[30];
    char address[30];
    long int zip;
    long int phone;
    char email[30];
};
struct person stu[3] = {{"Zhangsan", "Computer", "School of Computer", 411201, 58290407, "ZhangSan@qq.com"},
                        {"Lisi", "Network", "School of Computer", 411201, 58290407, "Lisi@qq.com"},
                        {"WangWu", "Computer", "School of Computer", 411201, 58290407, "WangWu@qq.com"}};
int main()
{
    struct person *p;
    printf("Name department address zip phone email\n");
    for (p = stu; p < stu + 3; p++)
        printf("%-10s %-10s %-15s %ld %ld %s\n", p->name, p->department, p->address, p->zip, p->phone, p->email);
    return 0;
}