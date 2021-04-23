#include <stdio.h>
void add(int x)
{
    x++;
    printf("%d,", x);
}
void sub(int x)
{
    x--;
    printf("%d,", x);
}
int main()
{
    int y = 1;
    add(y);
    sub(y);
    add(y);
    sub(y);
    return 0;
}