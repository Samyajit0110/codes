#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        int data = 0;
        prev = next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = this->next = NULL;
    }
};

class doubly_linked_list
{
    Node *head, *tail;

public:
    doubly_linked_list()
    {
        head = NULL; // must initialise head with NULL
    }
    void add_node_to_end(int);
    void insert_at_any_position(int, int);
    void delete_node(int);
    void print_list();
};

void doubly_linked_list::add_node_to_end(int data)
{
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        new_node->next = NULL;
        tail = new_node;
    }
}

void doubly_linked_list::delete_node(int key)
{
    Node *temp;
    temp = head;
    while (temp->data != key && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Deletion key not found" << endl;
    }
    else
    {
        Node *Previous, *Next;
        if (temp->next != NULL && temp->prev != NULL)
        {
            Previous = temp->prev;
            Next = temp->next;
            Previous->next = Next;
            Next->prev = Previous;
        }
        if (temp->next == NULL) // for deleting tail
        {
            Previous = temp->prev;
            Previous->next = NULL;
        }
        if (temp->prev == NULL) // for deleting head
        {
            Next = temp->next;
            Next->prev = NULL;
            head = Next;
        }
        cout << "Node deleted " << temp->data << endl;
        delete (temp);
    }
}
void doubly_linked_list::insert_at_any_position(int data, int position)
{
    Node *new_node = new Node(data);
    if (position == 1)
    {
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
    }
    else
    {
        int counter = 0;
        Node *temp;
        temp = head;
        while (counter < position - 1)
        {
            temp = temp->next;
            counter++;
        }
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next = temp->next->next;
        temp->next->next->prev = new_node;
    }
}
void doubly_linked_list::print_list()
{
    cout << endl;
    if (head == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    doubly_linked_list list;
    int data, position, choice;
    do
    {
        cout << "Enter choice\n"
             << "1 -> enter a node at the end\n2 -> delete a node"
             << "\n3 -> display list first to last\n4 -> display last to first"
             << "\n5 -> to insert at any position\n0 -> to exit menu" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data" << endl;
            cin >> data;
            list.add_node_to_end(data);
            break;
        case 2:
            cout << "Enter key to be deleted" << endl;
            cin >> data;
            list.delete_node(data);
            break;
        case 3:
            list.print_list();
            break;
        case 4:
            break;
        case 5:
            cout << "Enter position of insertion and data" << endl;
            cin >> position;
            cin >> data;
            list.insert_at_any_position(position, data);
        case 0:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != 0);
    return 0;
}
