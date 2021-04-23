#include "sms_struct.h"
int menu_select()
{
    char s[3];
    int c;
    printf("\n      * * * * * * * * 主菜单 * * * * * * * *\n");
    printf("            1. 输入记录\n");
    printf("            2. 输入记录\n");
    printf("            3. 对所有记录进行排序\n");
    printf("            4. 按姓名查找记录并显示\n");
    printf("            5. 插入记录\n");
    printf("            6. 删除记录\n");
    printf("            7. 将所有记录保存到文件\n");
    printf("            8. 从文件中读入所有记录\n");
    printf("            9. 退出\n");
    do
    {
        printf("        请选择操作(1-9):");
        scanf("%s", s);
        c = atoi(s);
    } while (c < 0 || c > 9);
    return (c);
}
int main()
{
    int n = 0;
    STUDENT student[20];
    for (;;)
    {
        switch (menu_select())
        {
        case 1:
            input(student, n);
            break;
        case 2:
            print(student, n);
            break;
        case 3:
            sort(student, n);
            break;
        case 4:
            search(student, n);
            break;
        case 5:
            n = insert(student, n);
            break;
        case 6:
            n = Delete(student, n);
            break;
        case 7:
            fileWrite(student, n);
            break;
        case 8:
            n = fileRead(student);
            break;
        case 9:
            exit(0);
            break;
        }
    }
    return 0;
}