#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 4
struct node
{
    struct node *next;
    char name[100];
} * head, *tail, *previousNode, *nextNode, *tempNode;
void addNameInNode(struct node *n, char string[])
{
    for (int i = 0; i < strlen(string); i++)
    {
        n->name[i] = string[i];
    }
}

void createNode(char nameOfStudent[])
{
    struct node *newNode = malloc(sizeof(struct node));
    addNameInNode(newNode, nameOfStudent);
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
    struct node *newNode = malloc(sizeof(struct node));
    tempNode = head;
    addNameInNode(newNode, "test "); // test values
    int counter = 1;
    if (position == 1) // insertion at head
    {
        newNode->next = head;
        head = newNode;
    }
    if (position == LIMIT) // insertion at tail
    {
        createNode("test ");
    }
    else // insertion at the middle
    {
        while (tempNode != NULL)
        {
            if (counter == position - 1)
            {
                previousNode = tempNode;
                nextNode = tempNode->next;
                previousNode->next = newNode;
                newNode->next = nextNode;
                return;
            }
            counter++;
            tempNode = tempNode->next;
        }
    }
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
            printf("element deleted : %s\n", tempNode->name);
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

void update(int position, char newEntry[])
{
    int counter = 1;
    if (counter == position - 1)
    {
        printf("updated entry from %s\n", tempNode->name);
        addNameInNode(tempNode, newEntry);
        printf("to %s\n", tempNode->name);
        return;
    }
    tempNode = tempNode->next;
    counter++;
}

void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("%s\n", n->name);
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