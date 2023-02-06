#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *head;
node *tail;

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

void deleteBeginning()
{
    node *temp;
    if (head == NULL)
        printf("list is underflow\n");
    else
    {
        temp = head->next;
        head->next = temp->next;
        free(temp);
    }
}

void deleteEnd()
{
    node *temp;
    if (head == NULL)
        printf("list is underflow\n");
    temp = head->next;
    while (temp->next != head)
        temp = temp->next;
    temp->next = head->next;
    head = temp;
}

void display()
{
    if (head == NULL)
        printf("list is underflow\n");
    else
    {
        struct node *temp;
        temp = head->next;
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
        printf("0 for insertion at beginning\n1 deletion at the beginning \n2 deletion at end\n3 display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Enter element\n");
            scanf("%d", &data);
            addNode(data);
            break;
        case 1:
            deleteBeginning();
            break;
        case 2:
            deleteEnd();
        case 3:
            display();
        default:
            break;
        }
    } while (choice != 3);
}
