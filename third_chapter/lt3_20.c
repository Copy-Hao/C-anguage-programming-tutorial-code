#include <stdio.h>
int main()
{
    long int f0 = 1, f1 = 1, f2;
    int n;
    printf("%8ld%8ld", f0, f1);
    for (n = 3; n <= 20; n++)
    {
        f2 = f1 + f0;
        printf("%ld", f2);
        f0 = f1;
        f1 = f2;
    }
    return 0;
}