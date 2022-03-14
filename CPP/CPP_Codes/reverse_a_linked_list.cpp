#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;
    Node()
    {
        data = 0;
        link = NULL;
    }
    Node(int data)
    {
        data = data;
        link = NULL;
    }
};

Node *head;
Node *tail;

void add_node(int data)
{
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->link = new_node;
        tail = new_node;
    }
    return;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int main()
{

    for (int i = 1; i < 10; i++)
    {
        add_node(i);
    }
    print_list(head);
    return 0;
}