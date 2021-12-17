// works for even number of nodes
//(1,2,3,4)
//(2,1,4,3)
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *tail;
void addNewNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
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
}
void swap(int *a, int *b)
{
    int temp;
    temp = a;
    *a = *b;
    *b = temp;
}
void pairWiseSwap(struct node *head)
{
    /* There must be at-least two nodes in the list */
    if (head != NULL && head->next != NULL)
    {

        /* Swap the node's data with data of next node */
        swap(head, head->next->data);
        /* Call pairWiseSwap() for rest of the list */
        pairWiseSwap(head->next->next);
    }
}
void displayNodes(struct node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}
void main()
{
    int i, max = 8;
    for (i = 1; i <= max; i++)
    {
        addNewNode(i);
    }
    // pairWiseSwap(head);
    displayNodes(head);
}