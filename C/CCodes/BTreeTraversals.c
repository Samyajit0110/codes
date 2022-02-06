#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *l;
    struct node *r;
};
void preOrder(struct node *n)
{
    if (n != NULL)
    {
        printf("%d", n->data);
        preOrder(n->l);
        preOrder(n->r);
    }
}
struct node *createNode(int element)
{
    struct node *node = malloc(sizeof(struct node));
    node->data = element;
    node->l = NULL;
    node->r = NULL;
    return node;
}
void main()
{
    struct node *root = createNode(7);
    struct node *node1 = createNode(2);
    struct node *node2 = createNode(3);
    struct node *node3 = createNode(1);
    struct node *node4 = createNode(4);
    root->l = node1;
    root->r = node2;
    node1->l = node3;
    node2->r = node4;
    preOrder(root);
}