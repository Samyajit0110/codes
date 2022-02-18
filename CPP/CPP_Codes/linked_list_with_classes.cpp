#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linked_list
{
    Node *head, *tail;

public:
    Linked_list()
    {
        head = NULL;
    }
    void insert_Node(int);
    void print_List();
    void delete_Node(int);
};

void Linked_list::insert_Node(int data)
{
    // Node *newNode = new Node(data); // parameterised constructor
    Node *newNode;
    newNode = new Node;
    //"new" operator allocates the object on the heap and returns a pointer to that memory
    // that's why newNode has to be a pointer
    // the memory block dosen't get deleted on it's own unless done so manually
    // memory in a stackframe gets deleted as soon as it's scope ends
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void Linked_list::delete_Node(int nodeOffset)
{
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;
    if (head == NULL)
    {
        cout << "List empty." << endl;
        return;
    }
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        ListLen++;
    }
    if (ListLen < nodeOffset)
    {
        cout << "Index out of range"
             << endl;
        return;
    }
    temp1 = head;
    if (nodeOffset == 1)
    {
        head = head->next;
        delete temp1;
        return;
    }
    while (nodeOffset > 1)
    {
        temp2 = temp1;
        temp1 = temp1->next;
        nodeOffset--;
    }
    temp2->next = temp1->next;
    delete temp1;
}

void Linked_list::print_List()
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Linked_list list;
    int data, choice;
    do
    {
        cout << "Enter choice\n 1-> add node 2-> delete a node 3-> print the list 0-> exit the menu" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data" << endl;
            cin >> data;
            list.insert_Node(data);
            break;
        case 2:
            cout << "Enter position of the node to be deleted" << endl;
            cin >> data;
            list.delete_Node(data);
            break;
        case 3:
            list.print_List();
            break;
        case 0:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != 0);
}