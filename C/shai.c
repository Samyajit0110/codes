#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
struct Node *tail;

void addNode(int data)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

void printNode()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    for (int i = 0; i < 10; i++)
    {
        addNode(i);
    }
    printNode();
}
