#include <stdio.h>
int main()
{
    int fact = 1, i = 0;
    for (i = 2; i <= 5; i++)
        fact = fact * i;
    printf("5!=%d\n", fact);
    return 0;
}