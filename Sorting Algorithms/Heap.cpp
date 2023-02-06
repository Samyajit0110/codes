#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int array[], int length, int root)
{
    int largest_index = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;
    if (left < length && array[left] > array[largest_index])
        largest_index = left;
    if (right < length && array[right] > array[largest_index])
        largest_index = right;
    if (largest_index != root)
    {
        swap(&array[root], &array[largest_index]);
        heapify(array, length, largest_index);
    }
}

void heapSort(int array[], int length)
{
    for (int i = length / 2 - 1; i >= 0; i--)
        heapify(array, length, i);
    for (int i = length - 1; i >= 0; i--)
    {
        swap(&array[0], &array[i]);
        heapify(array, i, 0);
    }
}
void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int array[] = {12, 11, 13, 5, 6, 7};
    int length = sizeof(array) / sizeof(array[0]);
    heapSort(array, length);
    printf("Sorted array is\n");
    printArray(array, length);
}
