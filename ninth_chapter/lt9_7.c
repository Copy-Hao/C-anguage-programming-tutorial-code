int fib(int n)
{
    int i, f1 = 1, f2 = 1, f3;
    if (n == 1 || n == 2)
        return 1;
    if (n > 2)
    {
        for (i = 3; i <= n; i++)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
}