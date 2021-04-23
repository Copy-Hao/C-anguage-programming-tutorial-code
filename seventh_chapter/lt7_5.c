#include <stdio.h>
struct my
{
    float a, b;
    char ch;
};
int main()
{
    struct my arg;
    void f1(struct my);
    arg.a = 888.88;
    f1(arg);
    return 0;
}
void f1(struct my parm)
{
    printf("%6.2f\n", parm.a);
}