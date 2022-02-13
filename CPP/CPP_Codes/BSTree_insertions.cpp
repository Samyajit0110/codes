#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

node *create_node(int data)
{
    node *new_node;
    new_node->data = data;
    new_node->left = new_node->right = NULL;
}

node *insert_node(int data, node *root)
{
    node *new_node;
    new_node = create_node(data);
    if (root == NULL)
    {
        root = new_node;
        return root;
    }
    else
    {
        node *temp_node;
        queue<node *> BSTree;
        BSTree.push(root);
        while (BSTree.empty() == false)
        {
            temp_node = BSTree.front();
            BSTree.pop();
            if (data >= temp_node->data)
            {
                if (temp_node->right != NULL)
                {
                    BSTree.push(temp_node->right);
                }
                else
                {
                    temp_node->right = new_node;
                }
            }
            else
            {
                if (temp_node->left != NULL)
                {
                    BSTree.push(temp_node->left);
                }
                else
                {
                    temp_node->left = new_node;
                }
            }
        }
    }
}

int main()
{

    return 0;
}