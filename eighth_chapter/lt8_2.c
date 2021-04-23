#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    if ((fp = fopen("test.dat", "rb")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    if (fclose(fp))
        printf("file close error!\n");
    return 0;
}