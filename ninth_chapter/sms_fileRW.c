#include "sms_struct.h"
void fileWrite(STUDENT *stud, int n)
{
    FILE *fp;
    int i = 0;
    char outfile[20];
    printf("请输入导出文件名,例如:G:\\f1\\score.txt:\n");
    scanf("%s", outfile);
    if ((fp = fopen(outfile, "wb")) == NULL)
    {
        printf("Can not open file\n");
        exit(0);
    }
    while (i < n)
    {
        fwrite(&stud[i], sizeof(STUDENT), 1, fp);
        i++;
    }
    fclose(fp);
    printf("- - - 所有记录已经成功保存至文件%s中！- - -\n", outfile);
}
int fileRead(STUDENT *stud)
{
    int i;
    FILE *fp;
    char infile[20];
    printf("请输入导入文件名，例如:G:\\f1\\score.txt:\n");
    scanf("%s", infile);
    if ((fp = fopen(infile, "rb")) == NULL)
    {
        printf("文件打开失败！\n");
        return 0;
    }
    i = 0;
    while (!feof(fp))
    {
        if (1 != fread(&stud[i], sizeof(STUDENT), 1, fp))
            break;
        i++;
    }
    fclose(fp);
    printf("已经成功从文件%s导入数据！！！\n", infile);
    return i;
}