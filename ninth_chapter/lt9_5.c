#include <stdio.h>
int main()
{
    int zhang, li, wang;
    for (zhang = 0; zhang < 2; ++zhang)
        for (li = 0; li < 2; ++li)
            for (wang = 0; wang < 2; ++wang)
            {
                if ((zhang && !li) || (!zhang && li) && ((li && !wang) || (!li && wang)) && (wang && !zhang && !li) || (!wang && (zhang || li)))
                {
                    printf("张三说的是%s\n", zhang ? "真话" : "假话");
                    printf("李四说的是%s\n", li ? "真话" : "假话");
                    printf("王五说的是%s\n", wang ? "真话" : "假话");
                }
            }
}