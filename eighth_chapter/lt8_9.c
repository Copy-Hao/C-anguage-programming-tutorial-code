#include <stdlib.h>
#include <stdio.h>
struct stu
{
    char name[10];
    int num;
    int age;
    char addr[15];
} stu1[2], stu2[2], *p, *q;

int main()
{
    FILE *fp;
    char ch;
    int i;
    p = stu1;
    q = stu2;
    if ((fp = fopen("stu_list", "wb+")) == NULL)
    {
        printf("Cannot open file!");
        exit(0);
    }
    printf("Please input data:\n");
    for (i = 0; i < 2; i++)
        scanf("%s%d%d%s", p->name, p->num, p->age, p->addr);
    p = stu1;
    fwrite(p, sizeof(struct stu), 2, fp);
    rewind(fp);
    fread(q, sizeof(struct stu), 2, fp);
    printf("\n\nname\tnumber age addr\n");
    for (i = 0; i < 2; i++)
        printf("%s\t%5d%4d %s\n", q->name, q->num, q->age, q->addr);
    fclose(fp);
    return 0;
}