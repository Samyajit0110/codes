#include "singlylinkedlist.h"
NODE *sortedMerge(NODE *, NODE *);
int main()
{
    NODE *head1 = NULL, *head2 = NULL;
    printf("Enter First List\n");
    head1 = createList(head1);
    displayList(head1);
    printf("\nEnter Second List\n");
    head2 = createList(head2);
    displayList(head2);
    NODE *res = sortedMerge(head1, head2);
    printf("\nSorted Merge list is\n");
    displayList(res);

    return 0;
}
NODE *sortedMerge(NODE *list1, NODE *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;
    if (list1->data > list2->data)
    {
        NODE *temp = list1;
        list1 = list2;
        list2 = temp;
    }
    NODE *res = list1;
    while (list1 != NULL && list2 != NULL)
    {
        NODE *tmp = NULL;
        while (list1 != NULL && list1->data <= list2->data)
        {
            tmp = list1;
            list1 = list1->next;
        }
        tmp->next = list2;
        // swap
        NODE *temp = list1;
        list1 = list2;
        list2 = temp;
    }
    return res;
}