#include "singlylinkedlist.h"

NODE *swapNodes(NODE *head);

int main()
{
    NODE *head = NULL;
    head = createList(head);
    printf("Original List:\n");
    displayList(head);

    head = swapNodes(head);
    printf("After Swapping:\n");
    displayList(head);

    return 0;
}

NODE *swapNodes(NODE *head)
{
    NODE *dummy = (NODE *)malloc(sizeof(NODE));
    dummy->next = head;
    NODE *prev = dummy;
    NODE *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        curr->next = curr->next->next;
        prev->next->next = curr;
        curr = curr->next;
        prev = prev->next->next;
    }
    return dummy->next;
}