// exam.c
long int fact(int n)
{
    long int p = 1;
    int k;
    for (k = 1; k <= n; k++)
        p *= k;
    return p;
}