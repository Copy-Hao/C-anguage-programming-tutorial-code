#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
// #include <string.h>
struct node
{
    int num;
    char str[20];
    struct node *next;
};
// 主函数
int main()
{
    struct node *creat(struct node *);
    struct node *insert(struct node *, char *, int);
    struct node *delete ();
    void print(struct node *);
    struct node *head;
    char str[20];
    int n;
    head = NULL;
    head = creat(head);
    print(head);
    printf("\n input inserted num,name:\n");
    gets(str);
    n = atoi(str);
    gets(str);
    head = insert(head, str, n);
    print(head);
    printf("\n input deleted name:\n");
    gets(str);
    head = delete (head, str);
    print(head);
    return 0;
}
// 创建链表函数
struct node *creat(struct node *head)
{
    char temp[30];
    struct node *p1, *p2;
    p1 = p2 = (struct node *)malloc(sizeof(struct node));
    printf("input num,name:\n");
    printf("exit:double times Enter!\n");
    gets(temp);
    gets(p1->str);
    p1->num = atoi(temp);
    p1->next = NULL;
    while (strlen(p1->str) > 0)
    {
        if (head == NULL)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct node *)malloc(sizeof(struct node));
        printf("input num,name:\n");
        printf("exit:double times Enter!\n");
        gets(temp);
        gets(p1->str);
        p1->num = atoi(temp);
        p1->next = NULL;
    }
    return head;
}
// 插入节点函数
struct node *insert(struct node *head, char *pstr, int n)
{
    struct node *p1, *p2, *p3;
    p1 = (struct node *)malloc(sizeof(struct node));
    strcpy(p1->str, pstr);
    p1->num = n;
    p2 = head;
    if (head == NULL)
    {
        head = p1;
        p1->next = NULL;
    }
    else
    {
        while (n > p2->num && p2->next != NULL)
        {
            p3 = p2;
            p2 = p2->next;
        }
        if (n <= p2->num)
            if (head == p2)
            {
                p1->next = p2;
                head = p1;
            }
            else
            {
                p1->next = p2;
                p3->next = p1;
            }
        else
        {
            p2->next = p1;
            p1->next = NULL;
        }
    }
    return (head);
}
// 删除节点函数
struct node *delete (struct node *head, char *pstr)
{
    struct node *temp, *p;
    temp = head;
    if (head == NULL)
        printf("\nList is null!\n");
    else
    {
        temp = head;
        while (strcmp(temp->str, pstr) != 0 && temp->next != NULL)
        {
            p = temp;
            temp = temp->next;
        }
        if (strcmp(temp->str, pstr) == 0)
        {
            if (temp == head)
            {
                head = head->next;
                free(temp);
            }
            else
            {
                p->next = temp->next;
                printf("delete string:%s\n", temp->str);
                free(temp);
            }
        }
        else
            printf("cannot find string!\n");
    }
    return (head);
}
// 链表输出函数
void print(struct node *head)
{
    struct node *temp;
    temp = head;
    printf("\n output strings:\n");
    while (temp != NULL)
    {
        printf("\n%d - - - - %s\n", temp->num, temp->str);
        temp = temp->next;
    }
    return;
}