#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *tail, *temp;

struct node *createnode(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (head == NULL)
        {
            temp = malloc(sizeof(struct node));
            temp->next = NULL;
            printf("enter the node data=");
            scanf("%d", &(temp->data));
            tail = temp;
            head = temp;
        }
        else
        {
            temp = malloc(sizeof(struct node));
            temp->next = NULL;
            printf("enter the node data");
            scanf("%d", &(temp->data));
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}
void traversal(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\n", (p->data));
        p = p->next;
    }
}
int main()
{
    int n;
    struct node *head;
    printf("enter the number of nodes=");
    scanf("%d", &n);
    head = createnode(n);
    traversal(head);
    return 0;
}
