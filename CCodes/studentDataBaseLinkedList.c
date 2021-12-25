#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    struct node *next;
    int data;
} * head, *tail, *previousNode, *nextNode, *tempNode;
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
        while (index < position - 1) // till previous node
        {
            index++;
            previousNode = previousNode->next;
        }
        nextNode = previousNode->next;
        previousNode->next = tempNode;
        tempNode->next = nextNode;
    }
}

void deleteNode(struct node **head_ref, int key)
{
    struct node *tempNode = *head_ref;

    if (tempNode != NULL && tempNode->data == key)
    {
        *head_ref = tempNode->next; // Changed head
        free(tempNode);             // free old head
        return;
    }
    while (tempNode != NULL && tempNode->data != key)
    {
        previousNode = tempNode;
        tempNode = tempNode->next;
    }

    if (tempNode == NULL)
    {
        printf("Desired key not found\n");
        return;
    }
    previousNode->next = tempNode->next;
    free(tempNode); // Free memory
}

// void selectInList(int position)
// {
//     int counter = 1;
// }

void update(int key, int newEntry)
{
    int index;
    tempNode = head;
    while (tempNode != NULL)
    {
        if (tempNode->data != key)
        {
            tempNode = tempNode->next;
        }
        else
        {
            tempNode->data = newEntry;
            printf("Updated value to %d\n", newEntry);
            return;
        }
    }
    printf("Desired value not found\n");
    return;
}

void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("%d\t", n->data);
        n = n->next;
    }
    printf("\n");
}
void main()
{
    // head = malloc(sizeof(struct node));
    int choice;
    int positon, newElement, key, length;
    do
    {
        printf("Enter choice\n\n");
        printf("0   create a new list\n1   insert\n2   delete\n3   update\n4   display\n5  exit\n");
        scanf("%d", &choice);
        printf("\n\n");
        switch (choice)
        {
        case 0:
            printf("Enter no of elements in the list\n");
            scanf("%d", &length);
            printf("keep entering elements\n");
            while (length > 0)
            {
                scanf("%d", &newElement);
                createNode(newElement);
                length--;
            }
            break;
        case 1:
            printf("Enter position and data\n");
            scanf("%d%d", &positon, &newElement);
            insertInList(positon, newElement);
            break;
        case 2:
            printf("Enter key to be deleted\n");
            scanf("%d", &key);
            deleteNode(&head, key);
            break;
        case 3:
            printf("Enter data to be updated and new entry");
            scanf("%d%d", &key, &newElement);
            update(key, newElement);
            break;
        case 4:
            printList(head);
            break;
        case 5:
            printf("bye bye!!");
            break;
        default:
            printf("Invalid input");
            break;
        }
    } while (choice != 5);
}
