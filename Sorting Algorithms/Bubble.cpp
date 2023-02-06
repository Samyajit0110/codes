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

void bubble_sort(int array[], int length)
{
    int i, j;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 0, 9, 8, 7, 6, 4, 5};
    int length = 10;
    bubble_sort(array, length);
    print_array(array, length);
    return 0;
}
