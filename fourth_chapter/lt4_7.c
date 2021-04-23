#include <stdio.h>
int step = 0;
int main()
{
    int n;
    void move(int, char, char, char);
    scanf("%d", &n);
    printf("n=%d\n", n);
    move(n, 'a', 'b', 'c');
    return 0;
}
void move(int n, char a, char b, char c)
{
    if (n > 0)
    {
        move(n - 1, a, b, c);
        step++;
        printf("step %d: %c-->%c\n", step, a, c);
        move(n - 1, b, a, c);
    }
}