#include "singlylinkedlist.h"

void detectCycle(NODE *);

int main()
{
    NODE *head = NULL;
    printf("Please Enter More Than 3 data\n");
    head = createList(head);
    displayList(head);
    detectCycle(head);

    NODE *tail = head;
    int size = 1;
    while (tail->next != NULL)
    {
        tail = tail->next;
        size++;
    }

    if (size >= 3)
    {
        tail->next = head->next->next;
        printf("\nLinked List Successfully Created with Cycle");
        detectCycle(head);
    }
    return 0;
}

void detectCycle(NODE *head)
{
    if (head == NULL || head->next == NULL)
    {
        printf("\nNo Cycle in Linked List");
        return;
    }

    NODE *slow = head;
    NODE *fast = head;
    NODE *entry = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            while (slow != entry)
            {
                slow = slow->next;
                entry = entry->next;
            }
            printf("\nCycle Detected at Node Data: %d", entry->data);
            return;
        }
    }
    printf("\nNo Cycle in Linked List");
}