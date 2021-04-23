#include <stdio.h>
#include <string.h>
int main()
{
    struct person
    {
        char name[20];
        char department[30];
        char address[30];
        long int zip;
        long int phone;
        char email[30];
    };
    struct person stu1;
    struct person *p;
    p = &stu1;
    strcpy(stu1.name, "ZhangSan");
    strcpy(stu1.department, "Computer");
    strcpy(stu1.address, "School of Coomputer");
    stu1.zip = 411201;
    stu1.phone = 58290474;
    strcpy(stu1.email, "ZhangSan@qq.com");
    printf("name:%s\ndepartment:%s\naddress:%s\n", stu1.name, stu1.department, stu1.address);
    printf("zip:%ld\nphone:%ld\nemail:%s\n", stu1.zip, stu1.phone, stu1.email);
    printf("name:%s\ndepartment:%s\naddress:%s\n", p->name, p->department, p->address);
    printf("zip:%ld\nphone:%ld\nemail:%s\n", (*p).zip, p->phone, p->email);
}