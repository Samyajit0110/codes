#include <stdio.h>
void insertion(int array[], int length)
{
    int partition = 0;
    int i, j = i - 1, key;
    for (i = 0; i < length; i++)
    {
        key = array[i];
        j = i - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}
void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ",array[i]);
    }
}
void main()
{
    int array[] = {1,2,5,6,9,8,7,6,5,4};
    insertion(array,10);
    print_array(array,10);
}