#include <stdio.h>
#include <stdlib.h>
struct node
{
    int element;
    struct node *next;
} * head, *temp, *first, *second, *Next, *Prev;
void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("The data in node  %d(data) is %p(nextPointer)\n", n->element, n->next);
        n = n->next;
    }
}
void delete_node(int position)
{
    free(temp);
    int i = 1;
    temp = malloc(sizeof(struct node));
    Prev = head;
    while(i < position - 1)
    {
        Prev = Prev ->next;
        i++;
    }
    temp = Prev -> next;
    Prev -> next = temp -> next;
    free(temp);
}
void insert_node(int element, int position)
{
    int i = 1;
    temp = NULL;
    temp = malloc(sizeof(struct node));
    Prev = head;
    temp->element = element;
    while (i < position - 1)
    {
        Prev = Prev->next;
        i++;
    }
    Next = Prev->next;
    temp->next = Next;
    Prev->next = temp;
}
void main()
{
    int i = 0;
    head = malloc(sizeof(struct node));
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    head->element = 1;
    first->element = 2;
    second->element = 3;
    head->next = first;
    first->next = second;
    second->next = NULL;
    int ins, pos;
    printf("Enter number to be inserted and pos\n");
    scanf("%d%d", &ins, &pos);
    //insert_node(ins, pos);
    delete_node(pos);
    printList(head);
}
