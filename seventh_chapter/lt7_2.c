#include <stdio.h>
struct person
{
    char name[20];
    char department[30];
    char address[30];
    long int zip;
    long int phone;
    char email[30];
};
int main()
{
    struct person a = {"Zhangsan", "Computer", "School of Computer", 411201, 58290407, "ZhangSan@qq.com"};
    printf("name:%s\ndepaterment:%s\naddress:%s\n", a.name, a.department, a.address);
    printf("zip:%ld\nphone:%ld\nemail:%s\n", a.zip, a.phone, a.email);
    return 0;
}