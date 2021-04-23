#include <stdio.h>
int main()
{
    int a = 10;
    int *p, *q;
    p = &a;
    printf("指针p的值为%p\n", p);
    printf("指针p指向的变量的值为*p=%d\n", *p);
    q = p;
    printf("指针p的值赋值给指针q后，指针q的值为q=%p\n", q);
    printf("指针p的值赋值给指针q后，指针q所指向的变量的值为*q=%d\n", *q);
    return 0;
}