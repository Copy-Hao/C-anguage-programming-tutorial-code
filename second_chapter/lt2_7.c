#include <stdio.h>
int main()
{
    int a = 5, b = 3, c, d;
    d = (c = a++, c++, b *= a * c, b /= a * c);
    printf("%d\n", d);
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}