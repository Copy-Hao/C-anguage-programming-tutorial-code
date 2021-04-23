#include <stdio.h>
int main()
{
    enum body
    {
        a,
        b,
        c,
        d
    } month[31];
    int i;
    int k = 0;
    for (i = 1; i <= 30; i++)
    {
        month[i] = (enum body)k;
        k++;
        if (k > 3)
            k = 0;
    }
    for (i = 1; i <= 30; i++)
    {
        switch (month[i])
        {
        case a:
            printf("%2d %c\t", i, 'a');
            break;
        case b:
            printf("%2d %c\t", i, 'b');
            break;
        case c:
            printf("%2d %c\t", i, 'c');
            break;
        case d:
            printf("%2d %c\t", i, 'd');
            break;

        default:
            break;
        }
    }
    printf("\n");
    return 0;
}