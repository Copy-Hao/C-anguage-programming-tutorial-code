#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    if ((fp = fopen("C:\\test.txt", "rb")) == NULL)
    {
        printf("Error on open c:\\test.txt file!");
        exit(0);
    }
    else
        printf("File open OK!\n");
    return 0;
}