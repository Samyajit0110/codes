#include <iostream>
#include <string>
using namespace std;

class linked_list
{
private:
    void add_node(int, string);
public:
    struct node;
    void print_list(node *);
    void driver();
    linked_list()
    {
        // head = NULL;
        // tail = NULL;
    }
};
struct linked_list::node
{
    string name;
    int roll;
    node *next;
} * head, *tail;

void linked_list::add_node(int roll, string name)
{
    node *new_node;
    new_node = new node; // allocating the node in heap
    new_node->name = name;
    new_node->roll = roll;
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

void linked_list::print_list(node *n)
{
    while (n != NULL)
    {
        cout << "Name : " << n->name << "\n Roll: " << n->roll << endl;
        n = n->next;
    }
}

void linked_list::driver()
{
    char choice;
    string name;
    int roll;
    do
    {
        cout << "Enter name:" << endl;
        getline(cin, name); // to accept a multi-word string
        cout << "Enter roll:" << endl;
        cin >> roll;
        add_node(roll, name);
        cout << "Do you want to continue\n";
        cin >> choice;
        fflush(stdin);
    } while (choice != 'n');
}
int main()
{
    linked_list list0;
    list0.driver();
    list0.print_list(head);
    FILE *file = fopen("structure.txt", "a+");
    file = fwrite(head, sizeof(list0.node), 1, file);
    return 0;
}
