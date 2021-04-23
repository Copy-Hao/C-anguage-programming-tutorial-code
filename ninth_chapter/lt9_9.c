#include <stdio.h>
#define N1 10
#define N2 10
#define SHOW
int findOnePath(int maze[N1][N2])
{
    int stack[N1 * N2][2], top = 0;
    int i, x = 1, y = 0, ok;
    stack[top][0] = x;
    stack[top][1] = y;
    maze[1][0] = 2;

    while (1)
    {
        ok = 0;
        if (y + 1 < N2 - 1 && maze[x][y + 1] == 0)
        {
            y += 1;
            ok = 1;
        }
        else if (x + 1 <= N1 - 1 && maze[x + 1][y] == 0)
        {
            x += 1;
            ok = 1;
        }
        else if (y - 1 >= 0 && maze[x][y - 1] == 0)
        {
            y -= 1;
            ok = 1;
        }
        else if (x - 1 >= 0 && maze[x - 1][y] == 0)
        {
            x -= 1;
            ok = 1;
        }
        if (!ok)
        {
            if (x == 1 && y == 0)
            {
                printf("很遗憾！您回退到了入口或还在入口未动，迷宫无可通路径！\n");
                return 0;
            }
            printf("回退一步！");
            top--;
            x = stack[top][0];
            y = stack[top][1];
        }
        else
        {
            printf("前探一步！");
            top++;
            stack[top][0] = x;
            stack[top][0] = y;
            if (x == N1 - 2 && y == N2 - 1)
            {
                printf("\n* * * * * * 恭喜 * * * * * *");
                printf("您已经探到了迷宫出口！探得的一条迷宫可通路径为:\n");
                for (i = 0; i < top; i++)
                    printf("(%d,%d)->", stack[i][0], stack[i][1]);
                printf("(%d,%d)\n", stack[top][0], stack[top][1]);
                return 1;
            }
            maze[x][y] = 2;
        }
#ifdef SHOW
        printf("正在探寻的可通路径为:\n");
        for (i = 0; i < top; i++)
            printf("(%d,%d)->", stack[i][0], stack[i][1]);
        printf("(%d,%d)\n", stack[top][0], stack[top][1]);
#endif
    }
}
void printMaze(int maze[N1][N2])
{
    int i, j;
    printf("迷宫数组为:\n");
    for (i = 0; i < N1; i++)
    {
        for (j = 0; j < N2; j++)
            printf("%2d", maze[i][j]);
        printf("\n");
    }
}
int main()
{
    int A[N1][N2] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                     0, 0, 0, 1, 0, 0, 0, 1, 0, 1,
                     1, 1, 0, 1, 0, 0, 0, 1, 0, 1,
                     1, 0, 0, 0, 0, 1, 1, 0, 0, 1,
                     1, 0, 1, 1, 1, 0, 0, 0, 0, 1,
                     1, 0, 0, 0, 1, 0, 0, 0, 0, 1,
                     1, 0, 1, 0, 0, 0, 1, 0, 0, 1,
                     1, 0, 1, 1, 1, 0, 1, 1, 0, 1,
                     1, 1, 0, 0, 0, 0, 0, 0, 0, 0,
                     1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    printMaze(A);
    findOnePath(A);
    return 0;
}