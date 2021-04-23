#include <stdio.h>
void swap(int *p, int *q)
{
    int temp;
    printf("交换调用函数用swap执行开始时，*p=%3d,*q=%3d\n", *p, *q);
    temp = *p;
    *p = *q;
    *q = temp;
    printf("交换调用swap执行结束时，*p=%3d,*q=%3d\n", *p, *q);
}
int main()
{
    int a = 10, b = 20;
    printf("交换函数用swap(&a,&b)执行前,a=%3d,b=%3d\n", a, b);
    swap(&a, &b);
    printf("交换函数用swap(&a,&b)执行后,a=%3d,b=%3d\n", a, b);
    return 0;
}