#include <stdio.h>
int main()
{
    int i = 1, s = 0;
    while (i <= 100)
    {
        s += i;
        i++;
    }
    printf("和为:%d,迭代次数为:%d\n", s, i - 1);
    return 0;
}