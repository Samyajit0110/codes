#include <stdio.h>
void insertion(int array[], int length)
{
    int i, j, key;
    for (i = 1; i < length; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
void print_Array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
}
void main()
{
    int array[] = {1, 2, 4, 6, 0, 9, 8, 7, 6, 5};
    insertion(array, 10);
    print_Array(array, 10);
}
