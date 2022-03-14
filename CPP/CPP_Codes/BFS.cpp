#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        data = 0;
        left = right = NULL;
    }
    Node(int data)
    {
        data = data;
        left = right = NULL;
    }
};

class binary_tree
{
    Node *root;
    binary_tree()
    {
        root = NULL;
    }

public:
    void add_node(int);
    void print_tree(Node *);
    void BFS(int);
};

void binary_tree::add_node(int data)
{
    Node *new_node = new Node(data);
    if (root == NULL)
    {
        root = new_node;
        return;
    }
    else
    {
        Node *temp;
        queue<Node *> BTree;
        BTree.push(root);
        while (!BTree.empty()) // while queue not empty
        {
            temp = BTree.front();
            BTree.pop();
            if (temp->left)
                BTree.push(temp->left);
            else
            {
                temp->left = new_node;
                return;
            }
            if (temp->right)
                BTree.push(temp->right);
            else
            {
                temp->right = new_node;
                return;
            }
        }
    }
}

void binary_tree::print_tree(Node *n)
{
    Node *temp = n;
    if (root == NULL)
    {
        cout << "Empty list" << endl;
    }
    else
    {
        print_tree(temp->left);
        cout << temp->data << " ";
        print_tree(temp->right);
    }
    cout << endl;
}
int main()
{
    return 0;
}
