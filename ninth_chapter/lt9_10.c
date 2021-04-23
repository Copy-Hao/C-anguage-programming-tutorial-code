#include <stdio.h>
int main()
{
    int money, k, i, change[20], total;
    int denomination[7] = {100, 50, 20, 10, 5, 2, 1};
    printf("输入欲找零的总额[1-99]:");
    scanf("%d", &money);
    for (i = 0; i < 7; i++)
        if (money >= denomination[i])
            break;
    k = 0;
    total = money;
    while (i < 7 && total != 0)
    {
        if (total >= denomination[i])
        {
            change[k] = denomination[i];
            total = total - change[k];
            k++;
        }
        else
        {
            i++;
        }
    }
    printf("总额为%d元的找零钱方案为:", money);
    printf("%d=%d", money, change[0]);
    for (i = 1; i < k; i++)
        printf("+%d", change[i]);
    printf("\n此贪婪法求得的最少找零张数为%d张。\n", k);
    return 0;
}