#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        printf("第0个参数(命令名)为:%s\n", *argv++);
        printf("第1个参数(命令名)为:%s\n", *argv++);
        printf("第2个参数(命令名)为:%s\n", argv[2]);
    }
    else
        printf("错误！请输入两个参数（字符串）！");
    return 0;
}