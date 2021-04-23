#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}
int compute(int x, int y, int (*p)(int, int))
{
    int n;
    n = (*p)(x, y);
    return n;
}
int main()
{
    int a, b, result;
    char op;
    printf("请连续输入操作数a,运算符op和操作数b:\n");
    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        result = compute(a, b, add);
        break;
    case '-':
        result = compute(a, b, sub);
        break;
    case '*':
        result = compute(a, b, mul);
        break;
    case '/':
        result = compute(a, b, div);
        break;
    }
    printf("计算的结果为:%d%c%d=%d\n", a, op, b, result);
    return 0;
}