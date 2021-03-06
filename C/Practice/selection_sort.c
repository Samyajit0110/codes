#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection(int array[], int length)
{
    int i = 0, minIndex = 0;
    for (i = 0; i < length; i++)
    {
        minIndex = i;
        for (int j = i; j < length; j++)
        {
            if (array[j] <= array[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&array[i], &array[minIndex]);
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
    selection(array, 10);
    print_Array(array, 10);
}
