#include <stdio.h>
int main()
{
    int x, y, z, n = 0;
    for (x = 1; x <= 5; x++)
        for (y = 1; y <= 10; y++)
            for (z = 1; z <= 20; z++)
            {
                if (20 * x + 10 * y + 5 * z == 100)
                {
                    n++;
                    printf("第%d种换法:x=%d,y=%d,z=%d\n", n, x, y, z);
                }
            }
    printf("穷举所有可能,共有%d种换法。\n", n);
    return 0;
}