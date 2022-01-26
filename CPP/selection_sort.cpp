#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selection(int array[], int length)
{
    int min_index;
    for (int i = 0; i < length; i++)
    {
        min_index = i;
        for (int j = i; j < length; j++)
        {
            if (array[min_index] > array[j])
            {
                min_index = j;
            }
        }
        swap(&array[min_index], &array[i]);
    }
}
void print_Array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i];
    }
}
int main()
{
    int array[] = {1, 2, 0, 9, 8, 3, 4, 7, 6, 5};
    int length = 10;
    selection(array, length);
    print_Array(array, length);
    return 0;
}