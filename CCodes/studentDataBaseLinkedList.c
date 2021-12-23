#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 4
struct node
{
    struct node *next;
    int data;
} * head, *tail, *previousNode, *nextNode, *tempNode;
void createNode(int element)
{
    struct node *newNode = malloc(sizeof(struct node));
    // addNameInNode(newNode, nameOfStudent);
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
}
void insertInList(int position, int element)
{
    int index = 1;
    tempNode = malloc(sizeof(struct node));
    tempNode->data = element;
    tempNode->next = NULL;
    if (position == 0 || position == 1) // insertion at head
    {
        tempNode->next = head;
        head = tempNode;
    }
    else
    {
        previousNode = head;
        while (index < position-1) // till previous node
        {
            index++;
            previousNode = previousNode->next;
        }
        nextNode = previousNode->next;
        previousNode -> next = tempNode;
        tempNode -> next = nextNode;
    }
}
void deleteNode(struct node **headRef, int key)
{
    tempNode = head;
    if (tempNode != NULL && tempNode->data == key)
    {
        *headRef = tempNode->next;
        free(tempNode);
        return;
    }
    while (tempNode != NULL && tempNode->data != key)
    {
        previousNode = tempNode;
        tempNode = tempNode->next;
    }
    if (tempNode == NULL)
        return;
    previousNode->next = tempNode->next;
    free(tempNode);
}
void selectInList(int position)
{
    int counter = 1;
}

void update(int position, int newEntry)
{
    int counter = 1;
    if (counter == position - 1)
    {
        printf("updated entry from %d\n", tempNode->data);
        // addNameInNode(tempNode, newEntry);
        tempNode->data = 3000;
        printf("to %d\n", tempNode->data);
        return;
    }
    tempNode = tempNode->next;
    counter++;
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
    head = malloc(sizeof(struct node));
    struct node *first = NULL; // test list
    struct node *second = NULL;
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    head->data = 1;
    first->data = 2;
    second->data = 3;
    head->next = first;
    first->next = second;
    second->next = NULL;
    insertInList(2, 4);
    printList(head);
}
