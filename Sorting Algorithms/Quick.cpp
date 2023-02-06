#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int partition(int low, int high, int array[])
{
    int pivot = array[low];
    int i = low, j = high;
    while (i < j)
    {
        do
        {
            i++;
        } while (array[i] <= pivot);
        do
        {
            j--;
        } while (array[j] > pivot);
        if (i < j)
        {
            swap(array[i], array[j]);
        }
    }
    swap(array[low], array[j]);
    return j;
}

void quick_sort(int low, int high, int array[])
{
    int j;
    if (low < high)
    {
        j = partition(low, high, array);
        quick_sort(low, j, array); 
        quick_sort(j + 1, high, array); 
    }
}

int main()
{
    int array[] = {1, 2, 3, 0, 9, 8, 7, 6, 4, 5, 8, INT_MAX};
    int length = 12;
    quick_sort(0, length - 1, array);
    print_array(array, length - 1);
    return 0;
}