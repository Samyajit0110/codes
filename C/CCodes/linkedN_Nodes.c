#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

struct node *head;
struct node *tail;

void addNode(int data)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        temp->data = data;
        temp->next = temp;
        head = temp;
    }
    else
    {
        temp->data = data;
        temp->next = head->next;
        head->next = temp;
        head = temp;
    }
}

void addBeginning(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        temp->data = data;
        temp->next = temp;
        head = temp;
    }
    else
    {
        temp->data = data;
        temp->next = head->next;
        head->next = temp;
    }
}

void display()
{
    if (head == NULL)
        printf("list is underflow\n");
    else
    {
        struct node *temp;
        temp = head->next;

        // While first node is not
        // reached again, print,
        // since the list is circular
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head->next);
        printf("\n");
    }
}

void main()
{
    int choice, data;
    do
    {
        printf("Enter choice\n");
        printf("0 for insertion at end\n1 for at the beginning\n2 display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Enter element\n");
            scanf("%d", &data);
            addNode(data);
            break;
        case 1:
            printf("Enter element\n");
            scanf("%d", &data);
            addBeginning(data);
            break;
        case 2:
            display();
        default:
            break;
        }
    } while (choice!=3);
}