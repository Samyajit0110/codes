#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int array[], int length)
{
    int i, j, swapped = 0;
    for (i = 0; i < length - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
void print_Array(int array[],int length)
{
    for(int i = 0;i<length;i++)
    {
        printf("%d, ",array[i]);
    }
}
void main()
{
    int array[] = {1,2,4,6,0,9,8,7,6,5};
    bubble(array,10);
    print_Array(array,10);
}