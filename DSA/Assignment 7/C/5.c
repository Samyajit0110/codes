#include <stdio.h>
int linearSearch(int arr[], int, int);
int main()
{
    int arr[] = {3, 9, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int index = linearSearch(arr, size, key);
    if (index == -1)
        printf("Item not found!");
    else
        printf("%d found at Index: %d", key, index);
    return 0;
}

int linearSearch(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
