#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x > 0)
    {
        if (x % 5 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}