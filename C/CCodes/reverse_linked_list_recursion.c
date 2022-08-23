#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *tail;

struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void add_node(int data)
{
    struct node *new_node = create_node(data);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
    return;
}

void print_in_reverse(struct node *n)
{
    if (n->next != NULL)
    {
        print_in_reverse(n->next);
    }
    printf("%d ", n->data);
}
void main()
{
    for (int i = 1; i <= 6; i++)
    {
        add_node(i);
    }
    print_in_reverse(head);
}


