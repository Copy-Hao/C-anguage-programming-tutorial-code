#include <stdio.h>
int main()
{
    int a, b;
    unsigned int c;
    char d = 'A';
    float f;
    double e;
    a = 3, b = -3, c = -5;
    f = 3.14259;
    e = 12.3e10;
    printf("Character:ASCII code d=%c ASCII value d=%d\n", d, d);
    printf("Decimal:a=%d b=%d c=%d\n", a, b, c);
    printf("Unsigned:a=%u b=%u c=%u\n", a, b, c);
    printf("Octor: a=%o b=%o c=%o\n", a, b, c);
    printf("Hexdecimal: a=%x b=%x c=%x\n", a, b, c);
    printf("Hexdecimal: a=%X b=%X c=%X\n", a, b, c);
    printf("format f: f=%f e=%f\n", f, e);
    printf("format e: f=%e e=%e\n", f, e);
    printf("format e: f=%g e=%g\n", f, e);
    return 0;
}