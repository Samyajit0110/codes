#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int lastMinIndex = (low - 1);
    for (int i = low; i <= high - 1; i++)
    {
        if (array[i] < pivot)
        {
            lastMinIndex++;
            swap (&array[lastMinIndex],&array[i]);
        }
    }
    swap (&array[lastMinIndex + 1],&array[high]);
    return (lastMinIndex + 1);
}
void quickSort(int array[], int low, int high)
{
    int pi;//partition
    if (low < high)
    {

        pi = partition(array, low, high);

        quickSort(array, low, pi - 1);  // Before pi
        quickSort(array, pi + 1, high); // After pi
    }
}
void printArray(int a[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void main()
{
    int array[] = {9, 8, 7, 3, 4, 0, 2, 1, 7, 5};
    quickSort(array, 0, 10);
    printArray(array, 10);
}
