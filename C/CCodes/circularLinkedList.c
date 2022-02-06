#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
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

        tail->next = newNode;
        tail = newNode;
    }
    tail->next = head;
}
void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
}
void main()
{
    head = NULL;
    tail = NULL;
    int arr[2];
    for (int i = 1; i <= 2; i++)
    {
        createNode(i);
    }
    printList(head);
}