#include <stdlib.h>
#include <stdio.h>
struct stu
{
    char name[10];
    int num;
    int age;
    char addr[15];
} stu1, *q;
int main()
{
    FILE *fp;
    char ch;
    int i = 1;
    q = &stu1;
    if ((fp = fopen("stu_list", "rb")) == NULL)
    {
        printf("Cannot open file!");
        exit(0);
    }
    rewind(fp);
    fseek(fp, i * sizeof(struct stu), 0);
    fread(q, sizeof(struct stu), 1, fp);
    printf("\n\nname\tnumber age addr\n");
    printf("%s\t%5d %7d %s\n", q->name, q->age, q->addr);
    fclose(fp);
    return 0;
}