#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 4
struct node
{
    struct node *next;
    int data;
    // char name[100];
} * head, *tail, *previousNode, *nextNode, *tempNode;
// void addNameInNode(struct node *n, char string[])
// {
//     for (int i = 0; i < strlen(string); i++)
//     {
//         n->name[i] = string[i];
//     }
// }

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

void insertInList(int position)
{
    struct node *temp = malloc(sizeof(struct node));
    //insert at head

}
void deleteInList(int position)
{
    int counter = 1;
    while (tempNode != NULL)
    {
        if (counter = position - 1)
        {
            previousNode = tempNode;
            tempNode = previousNode->next;
            nextNode = tempNode->next;
            previousNode->next = nextNode;
            printf("element deleted : %d\n", tempNode->data);
            free(tempNode);
            return;
        }
        counter++;
        tempNode = tempNode->next;
    }
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
    // char getName[10] = "ezyy gege\0";
    // createNode(getName);
    // char getName2[10] = "nexts";
    // createNode(getName2);
    // char getName3[10] = "da what";
    // createNode(getName3);
    // insertInList(4);
    // deleteInList(2);
    // update(4,getName);
    // printList(head);
}


