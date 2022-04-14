#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} * head, *tail;
void add_node(int data)
{
    node *new_node = new node();
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}
void print_list(node *head)
{
    node *temp_node = head;
    while (temp_node != NULL)
    {
        cout << temp_node->data << " ";
        temp_node = temp_node->next;
    }
    cout << endl;
}
void reverse_by_group(int group)
{
}
int main()
{

    return 0;
}
