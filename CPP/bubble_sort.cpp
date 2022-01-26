#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
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
    bubble(array, length);
    print_Array(array, length);
}