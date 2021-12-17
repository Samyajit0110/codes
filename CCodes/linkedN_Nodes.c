#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *tail;
void addNode(int element)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    head = NULL; //(struct node *)malloc(sizeof(struct node));
    tail = NULL;
    //tail=head;
    newNode->data = element;
    newNode->next = NULL;

    //Checks if the list is empty
    if (head == NULL && tail == NULL)
    {
        //If list is empty, both head and tail will point to new node
        tail = newNode;
        head = newNode;
    }
    else
    {
        //newNode will be added after tail such that tail's next will point to newNode
        tail->next = newNode;
        //newNode will become new tail of the list
        tail = newNode;
    }
}
void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("The data in node  %d(data)\n", n->data);
        n = n->next;
    }
}
void main()
{
    for (int i = 1; i <= 20; i++)
    {
        addNode(i);
    }
    printList(head);
    printf("%x\n%x",head->next, tail->next);
}
