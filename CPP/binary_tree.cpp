#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
} * current_node;

node *create_node(int data)
{
    node *new_node;
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
}

void preorder_traversal(node *n) // recursive function for traversing through nodes
{
    if (n != NULL)
    {
        current_node = n;
        preorder_traversal(n->left);
        preorder_traversal(n->right);
    }
}

node *add_node(node *n, int data) // n = root in the tree
{
    current_node = NULL;
    if (n == NULL)
    {
        n = create_node(data);
        return n;
    }
    queue<node *> tree_queue;
    tree_queue.push(n);
    tree_queue.pop();
    while (!tree_queue.empty())
    {
        current_node = tree_queue.front();
        tree_queue.pop();
        if (current_node->left != NULL)
        {
            tree_queue.push(current_node->left);
        }
        else
        {
            current_node->left = create_node(data);
            return current_node; // root
        }
        if (current_node->right != NULL)
        {
            tree_queue.push(current_node->right);
        }
        else
        {
            current_node->right = create_node(data);
            return current_node; // root
        }
    }
}
int main()
{

    return 0;
}
