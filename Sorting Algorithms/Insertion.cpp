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

void insertion_sort(int array[], int length)
{
    int i, j, key;
    for (i = 0; i < length; i++)
    {
        key = i;
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            swap(array[j], array[j + 1]);
            j--;
        }
        array[j + 1] = key;
    }
}
int main()
{
    int array[] = {1, 2, 3, 0, 9, 8, 7, 6, 4, 5};
    int length = 10;
    insertion_sort(array, length);
    print_array(array,length);
    return 0;
}
