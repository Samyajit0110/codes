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
    new_node->left = NULL;
    new_node->right = NULL;
    return (new_node);
}

node *add_node(int data, node *root)
{
    if (root == NULL)
    {
        root = create_node(data);
        return root;
    }
    else
    {
        node *temp_node;
        node *newNode; // the node to be added
        queue<node *> Btree;
        Btree.push(root);
        while (Btree.empty() != false)
        {
            temp_node = Btree.front();
            Btree.pop();
            if (temp_node->left != NULL)
            {
                Btree.push(temp_node->left);
            }
            else
            {
                newNode = create_node(data);
                temp_node->left = newNode;
            }
            if (temp_node->right != NULL)
            {
                Btree.push(temp_node->right);
            }
            else
            {
                newNode = create_node(data);
                temp_node->right = newNode;
            }
        }
    }
}

node *level_order_traversal(int key, node *root) // key is the elemnt to be found
{
    if (root == NULL)
    {
        cout << "the tree is empty" << endl;
        return root;
    }
    else
    {
        node *temp_node;
        node *delete_node;
        node *last_node;
        queue<node *> BTree;
        BTree.push(root);
        while (BTree.empty() == false)
        {
            temp_node = BTree.front();
            BTree.pop();
            if (temp_node->data == key)
            {
                delete_node = temp_node;
            }
            if (temp_node->left != NULL)
            {
                BTree.push(temp_node->left);
            }
            if (temp_node->right != NULL)
            {
                BTree.push(temp_node->right);
            }
        }
        last_node = temp_node;
        delete_node->data = last_node->data;
        delete (last_node);
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}

int main()
{
    char choice;
    int data;
    node *root = NULL;
    do
    {
        cout << "Enter choice\n**** 1 -> add a node\n**** 2->delete a node\n**** 3->display the tree" << endl;
        cin >> choice;
        data = 0;
        switch (choice)
        {
        case '1':
            cout << "Enter data" << endl;
            cin >> data;
            root = add_node(data, root);
            break;
        case '2':
            cout << "Enter the key to be deleted" << endl;
            cin >> data;
            root = level_order_traversal(data, root);
            break;
        case '3':
            inorder(root);
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != '0');

    return 0;
}
