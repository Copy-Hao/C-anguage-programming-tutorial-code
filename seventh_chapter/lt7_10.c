#include <stdio.h>
struct time
{
    short year;
    short month;
    short day;
};
union dig
{
    struct time data;
    char byte[6];
};
int main()
{
    union dig unit;
    int i;
    printf("enter year:\n");
    scanf("%d", &unit.data.year);
    printf("enter month:\n");
    scanf("%d", &unit.data.month);
    printf("enter day:\n");
    scanf("%d", &unit.data.day);
    printf("year=%d month=%d day=%d\n", unit.data.year, unit.data.month, unit.data.day);
    for (i = 0; i < 6; i++)
        printf("%d,", unit.byte[i]);
    printf("\n");
    return 0;
}