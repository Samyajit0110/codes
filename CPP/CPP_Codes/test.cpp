
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
} * head;

void delete_node(int key)
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
		if (temp->next == NULL)
		{
			Previous = temp->prev;
			Previous->next = NULL;
		}
		if (temp->prev == NULL)
		{
			Next = temp->next;
			Next->prev = NULL;
			head = Next;
		}
		cout << "Node deleted " << temp->data << endl;
		delete (temp);
	}
}

int main()
{
	head = new Node();
	Node *first = new Node();
	Node *second = new Node();
	head->data = 1;
	first->data = 2;
	second->data = 3;
	head->prev = NULL;
	first->prev = head;
	second->prev = first;
	head->next = first;
	first->next = second;
	second->next = NULL;
	Node *temp;
	delete_node(1);
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	return 0;
}