#include <iostream>
using namespace std;

// struct node
// {
//     int data;
//     node *next;
// } * head, *tail;

// void add_node(int data)
// {
//     node *new_node = new node();
//     new_node->data = data;
//     new_node->next = NULL;
//     if (head == NULL)
//     {
//         head = new_node;
//         tail = new_node;
//     }
//     else
//     {
//         tail->next = new_node;
//         tail = new_node;
//     }
// }

// void print_list(node *head)
// {
//     node *temp_node = head;
//     while (temp_node != NULL)
//     {
//         cout << temp_node->data << " ";
//         temp_node = temp_node->next;
//     }
//     cout << endl;
// }

// void reverse_list()
// {
//     node *prev_node = NULL, *next_node = NULL;
//     // prev_node = next_node = NULL dosen't work
//     node *current_node = head;
//     while (current_node != NULL)
//     {
//         next_node = current_node->next;
//         current_node->next = prev_node;
//         prev_node = current_node;
//         current_node = next_node;
//     }
//     head = prev_node;
// }
// // task: add recursion approach for reversing
// int main()
// {
//     for (int i = 1; i <= 6; i++)
//     {
//         add_node(i);
//     }
//     reverse_list();
//     print_list(head);
//     return 0;
// }