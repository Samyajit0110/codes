#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void printList(struct node* n)
{
    while(n!= NULL)
    {
        printf("The data in node  %d(data) is %p(nextPointer)\n", n->data, n->next);
        n = n->next;
    }
}
void main()
{
    struct node* head = NULL;
    struct node* second_element = NULL;
    struct node* third_element = NULL;
    head = malloc(sizeof(struct node));
    second_element = malloc(sizeof(struct node));
    third_element = malloc(sizeof(struct node));
    head -> data = 1;
    head ->next = second_element;
    second_element -> data = 2;
    second_element -> next = third_element;
    third_element -> data = 3;
    third_element -> next = NULL;
    printList(head);
}
