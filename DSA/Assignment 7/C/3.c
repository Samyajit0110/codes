#include <stdio.h>
void insertionSort(int arr[], int);

int main()
{
    int arr[] = {3, 7, 5, 9, 1, 6, 2, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printf("Sorted Array is\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}

void insertionSort(int arr[], int size)
{
    int i, j, curr;
    for (i = 1; i < size; i++)
    {
        curr = arr[i];
        j = i - 1;
        while (j >= 0 && curr < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}
