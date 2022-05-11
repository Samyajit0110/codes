#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * head, *tail;

struct node *create_node(int n)
{
    struct node *new_node = new struct node;
    new_node->data = n;
    new_node->next = NULL;
}

static int count_nodes = 0;

void add_node(int n)
{
    struct node *new_node = create_node(n);

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
    count_nodes++;
}

void deletion(int position)
{
    if (position > count_nodes)
    {
        cout << "Out of bounds" << endl;
    }

    struct node *temp = head;
    if (position == 1)
    {
        head = head->next;
        delete (temp);
        return;
    }

    int index;
    if (position == count_nodes)
    {
        for (index = 1; index < position; index++)
        {
            if (index == position - 1)
                break;
            temp = temp->next;
        }
        tail = temp;
        tail->next = NULL;
        temp = temp->next;

        delete (temp);
        return;
    }

    struct node *Previous, *Next;
    for (index = 1; index < position; index++)
    {
        if (index == position - 1)
            break;
        temp = temp->next;
    }

    Previous = temp;
    temp = Previous->next;
    Next = temp->next;

    Previous->next = Next;
    delete (temp);
}
void print_list(struct node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{

    int choice, data;
    do
    {
        cout << "Enter choice 1 - continue\t2 - delete\t0 - exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter node: \n";
            cin >> data;
            add_node(data);
            break;

        case 2:
            cout << "Enter position" << endl;
            cin >> data;
            deletion(data);

        case 0:
            print_list(head);
            break;
        }
    } while (choice);
    return 0;
}