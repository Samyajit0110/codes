#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char string[10];
    int number;
    struct node *next;
} * head, *tail;

void createNode(char getName[], int num)
{
    struct node *newNode = malloc(sizeof(struct node));
    strcpy(newNode->string, getName);
    newNode->number = num;
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
void printList(struct node *head_ref)
{
    while (head_ref != NULL)
    {
        printf("String = %s\n", head_ref->string);
        printf("Number = %d\n", head_ref->number);
        head_ref = head_ref->next;
    }
}
// }
// void main()
// {
//     //head = NULL;
//     char getName[10];
//     int number;
//     for (int i = 1; i <= 2; i++)
//     {
//         printf("Enter String\t");
//         gets(getName);
//         printf("enter number\t");
//         scanf("%d",&number);
//         createNode(getName,number);
//     }
//     printf("printing list\n");
//     //printList(head);
// } 