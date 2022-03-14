#include <iostream>
using namespace std;

int main()
{
    int length = 6;
    int array1[6] = {1, 2, 3, 6, 7, 8};
    int array2[6] = {4, 5, 9, 10, 11, 12};
    int i, j = 0;
    for (i = 0; i < length; i++) // traversing through array1
    // if element in first array is greater the one current one in the second array then we swap
    // the two elements thus making array2 a continuation of array1
    {
        if (array1[i] > array2[j])
        {
            swap(array1[i], array2[j]);
            j++; // incrementing the index of array2
        }
    }
    for (i = 0; i < length; i++)
    {
        cout << array1[i] << " ";
    }
    for (i = 0; i < length; i++)
    {
        cout << array2[i] << " ";
    }
    return 0;
}
