#include "singlylinkedlist.h"

NODE *reverseList(NODE *);

int main()
{
    NODE *head = NULL;
    head = createList(head);
    printf("Original List:\n");
    displayList(head);

    head = reverseList(head);
    printf("Reversed List:\n");
    displayList(head);

    return 0;
}

NODE *reverseList(NODE *head)
{
    NODE *curr = head;
    NODE *prev = NULL;
    while (curr != NULL)
    {
        NODE *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
