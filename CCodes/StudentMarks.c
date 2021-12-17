#include <stdio.h>
#include <stdlib.h>
struct student
{
    int marks, roll, id;
};
struct node
{
    char name;
    struct node *next;
} * head, *N, *P; //N and P for next node and previoust respectively
void insertNode(struct node *n, int targetPos)
{
    int pos = 1;
    struct node *temp = NULL;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        if (pos == targetPos - 1)
        {
            P = temp;
            N = temp->next;
            temp->name = (char)"Sam";
            temp->next = N;
            P->next = temp;
        }
        pos++;
    }
}
void printList(struct node *node)
{
    while (node->next != NULL)
    {
        printf("%s", node->name);
        node = node->next;
    }
}
void main()
{
    head = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    printf("Enter a name");
    char inputName[20];
    gets(inputName);
    gets(inputName);
    head->next = second;
    second->next = NULL;
    insertNode(head,2);
}