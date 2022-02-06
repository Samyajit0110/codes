#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
} * head, *tail;
void createNode(int element)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = element;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->previous = tail;
        tail->next = newNode;
        tail = newNode;
    }
    tail->next = head;
}
void printList(struct node *n)
{
    while (n->previous != NULL)
    {
        printf("%d", n->data);
        n = n->previous;
    }
}
void main()
{
   // head->previous = NULL;
    head = NULL;
    tail = NULL;
    for (int i = 2; i >= 1; i--)
    {
        createNode(i);
    }
    printList(tail);
}
