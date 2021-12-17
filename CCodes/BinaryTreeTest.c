#include <stdio.h>
#include <malloc.h>
struct node
{
    int element;
    struct node *l;
    struct node *r;
};
struct node *createNode(int data)
{
    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));
    newNode->element = data;
    newNode->l = NULL;
    newNode->r = NULL;
    return newNode;
}
void main()
{
    struct node *node0;
    struct node *node1;
    node0 = createNode(1);
    node1 = createNode(2);
    printf("%d  %d", node0->element, node1->element);
    struct node *node2 = createNode(3);
    struct node *node3 = createNode(4);
    struct node *node4 = createNode(5);
    struct node *node5 = createNode(6);
    struct node *node6 = createNode(7);
    node0->l = node1;
    node0->r = node2;
    node1->l = node3;
    node1->r = node4;
    node2->l = node5;
    node2->r = node6;
}