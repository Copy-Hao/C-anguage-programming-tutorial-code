#include <stdio.h>
int x = 10;
void f1()
{
    extern float y;
    x++;
    printf("x=%d,", x);
    printf("y=%f\n", y);
}
float y = 2;
int main()
{
    int x = 1;
    x++;
    f1();
    printf("x=%d,y=%f\n", x, y);
    return 0;
}