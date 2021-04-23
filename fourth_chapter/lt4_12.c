#include <stdio.h>
void f1()
{
    int x = 1;
    x++;
    printf("x=%d,", x);
}
void f2()
{
    static int x = 1;
    x++;
    printf("x=%d\n", x);
}
int main()
{
    f1();
    f2();
    f1();
    f2();
    return 0;
}