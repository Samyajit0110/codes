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
void insertInList(int position,int element)
{
    struct node *temp = malloc(sizeof(struct node));
    //insert at head
    //insert at middle
    int i = 1;
    tempNode = NULL;
    tempNode = malloc(sizeof(struct node));
    previousNode = head;
    temp->data = element;
    while (i < position - 1)
    {
        previousNode = previousNode->next;
        i++;
    }
    nextNode = previousNode->next;
    tempNode->next = nextNode;
    previousNode->next = tempNode;

}
void deleteNode(struct node **headRef, int key)
{   tempNode = head; 
    if (tempNode != NULL && tempNode->data == key) {
        *headRef = tempNode->next; 
        free(tempNode); 
        return;
    }
    while (tempNode != NULL && tempNode->data != key) {
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
        tempNode->data  = 3000;
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
}
