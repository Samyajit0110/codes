#include <stdio.h>
void SortArray(int size, int *parr)

{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(parr + j) < *(parr + i))
            {
                temp = *(parr + i);
                *(parr + i) = *(parr + j);
                *(parr + j) = temp;
            }
        }
    }
    printf("\n Sorted Array elements using pointer = %d\n", parr);
    for (i = 0; i < size; i++)
    {
        printf(" %d ", *(parr + i));
    }
}
int main()
{
    int size;
    printf("\n Enter array size to sort using pointer: ");
    scanf("%d", &size);
    int arr[50];
    printf("Please enter elements of an array : \n");
    fflush(stdin);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    SortArray(size, arr);
    printf("\n");
}