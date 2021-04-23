#include <stdlib.h>
#include <stdio.h>
struct node
{
    int num;
    struct node *next;
};
int main()
{
    struct node *creat(struct node *);
    void print(struct node *);
    struct node *head;
    head = NULL;
    head = creat(head);
    print(head);
    return 0;
}
struct node *creat(struct node *head)
{
    int n;
    struct node *p1 = NULL, *p2 = NULL;
    printf("Please input a integer(>0),if input -1 then exit:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        p1 = (struct node *)malloc(sizeof(struct node));
        p1->num = n;
        p1->next = NULL;
        if (head == NULL)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        scanf("%d", &n);
    }
    return head;
}
void print(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%6d", temp->num);
        temp = temp->next;
    }
}