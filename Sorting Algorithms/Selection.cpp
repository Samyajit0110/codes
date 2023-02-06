#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int array[], int length)
{
    int i, j, min_Index;
    for (i = 0; i < length - 1; i++)
    {
        min_Index = i;
        for (j = i + 1; j < length; j++)
        {
            if (array[j] < array[min_Index])
            {
                min_Index = j;
            }
        }
        swap(array[i], array[min_Index]);
    }
}

void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int array[] = {1, 2, 3, 0, 9, 8, 7, 6, 4, 5};
    int length = 10;
    selection_sort(array, length);
    print_array(array, length);
    return 0;
}