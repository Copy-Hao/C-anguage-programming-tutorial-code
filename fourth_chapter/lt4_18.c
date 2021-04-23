#include <stdio.h>
#define OK 1
#ifdef OK
#define STRING "you have defined OK!"
#define STRING1 "\nOK=1"
#else
#define STRING "you have not defined OK!"
#define STRING1 "\nOK未定义"
#endif
int main()
{
    printf(STRING);
    printf(STRING1);
    return 0;
}