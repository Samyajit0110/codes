#include "singlylinkedlist.h"

NODE *leftShift(NODE *, int, int);

int main()
{
    NODE *head = NULL;
    head = createList(head);
    displayList(head);

    NODE *curr = head;
    int n = 1, k;
    while (curr->next && ++n)
        curr = curr->next;
    printf("Enter k (should be <=%d): ", n);
    scanf("%d", &k);

    head = leftShift(head, n, k);
    printf("\nLinked List Left shifted by %d nodes\n", k);
    displayList(head);

    return 0;
}

NODE *leftShift(NODE *head, int n, int k)
{
    if (k < 0 || k > n)
    {
        printf("Invalid!");
        exit(1);
    }
    if (!head || !head->next || k == 0 || k == n)
    {
        return head;
    }
    NODE *tail = head;
    while (tail->next != NULL)
        tail = tail->next;
    tail->next = head;
    NODE *curr = head;
    for (int i = 1; i < k; i++)
    {
        curr = curr->next;
    }
    NODE *res = curr->next;
    curr->next = NULL;
    return res;
}