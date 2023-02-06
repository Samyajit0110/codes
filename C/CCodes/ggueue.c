#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *head;
Node *tail;

void addNode(int data)
{
    Node *temp;
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
    Node* temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


void main()
{
    for(int i = 1; i<=10; i++)
    {
        addNode(i);
        printf("gg");
    }
    printNode();
}

