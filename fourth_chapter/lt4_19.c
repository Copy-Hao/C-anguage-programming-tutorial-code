#include <stdio.h>
#define A 2
int main()
{
#if A > 0
    printf("A>0");
#else
    printf("A<0 or A=0");
#endif
    return 0;
}