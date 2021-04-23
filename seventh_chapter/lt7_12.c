#include <stdio.h>
int main()
{
    int a = 9, b = 5, c, d, e, f, g, h, p, r;
    char q = 'a', w = 'b';
    c = a & b;
    d = a | b;
    e = a ^ 15;
    f = ~9;
    g = f << 4;
    h = b >> 2;
    p = q;
    p = (p << 8) | w;
    r = (p & 0xff00) >> 8;
    printf("a=%d,b=%d,c=%d,d=%d,f=%d\n", a, b, c, d, e, f);
    printf("g=%d,h=%d,p=%d,r=%d\n", g, h, p, r);
    return 0;
}