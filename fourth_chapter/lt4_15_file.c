// file.c
#include <stdio.h>
#include "lt4_15_exam.c"
int main()
{
    int m, n;
    long int p;
    printf("Input n,m(n>m):");
    scanf("%d,%d", &n, &m);
    p = fact(n) / fact(m) / fact(n - m);
    printf("%ld\n", p);
    return 0;
}