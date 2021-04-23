// method 1
// #include <stdio.h>
// int main()
// {
//     int i;
//     char str1[20], str2[20] = {"How are you!"};
//     for (i = 0; (str1[i] = str2[i]) != '\0'; i++)
//         puts(str1);
//     return 0;
// }

// method 2
// #include <stdio.h>
// int main()
// {
//     int i;
//     char str1[20], str2[20] = {"How are you!"};
//     char *p1 = str1,*p2 = str2;
//     for (i = 0; (p1[i] = p2[i]) != '\0'; i++)
//         puts(str1);
//     return 0;
// }
// method 3
// #include <stdio.h>
// int main()
// {
//     int i;
//     char str1[20], str2[20] = {"How are you!"};
//     char *p1 = str1, *p2 = str2;
//     for (i = 0; (*(p1 + i) = *(p2 + i)) != '\0'; i++)
//         puts(str1);
//     return 0;
// }
// method 4
#include <stdio.h>
int main()
{
    int i;
    char str1[20], str2[20] = {"How are you!"};
    char *p1 = str1, *p2 = str2;
    for (i = 0; (*(str1 + i) = *(str2 + i)) != '\0'; i++)
        puts(str1);
    return 0;
}