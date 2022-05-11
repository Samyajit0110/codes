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
    return new_node;
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

void insertion(int position, int data)
{
    if (position > count_nodes)
    {
        cout << "Out of bounds" << endl;
        return;
    }

    struct node *new_node = create_node(data);

    if (position == 1)
    {
        new_node->next = head;
        head = new_node;
        return;
    }

    if (position == count_nodes)
    {
        add_node(data);
        return;
    }

    struct node *temp, *Previous, *Next;
    for (int index = 1; index < position; index++)
    {
        if (index == position - 1)
            break;
        temp = temp->next;
    }
    Previous = temp;
    Next = temp->next;
    Previous->next = new_node;
    new_node->next = Next;
}

void print_list(struct node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
int main()
{
    int choice, data, position;
    do
    {
        cout << "Enter choice 1 - new node\t2 - insert node\t0 - exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter node" << endl;
            cin >> data;
            add_node(data);
            break;

        case 2:
            cout << "Enter position and node" << endl;
            cin >> position >> data;
            insertion(position, data);
            break;

        case 0:
            print_list(head);
        }
    } while (choice);
    return 0;
}