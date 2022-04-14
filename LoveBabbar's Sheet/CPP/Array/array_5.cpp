#include <iostream>
using namespace std;

// could have been done by sorting
// same segregation method used as array_4.cpp
#define LENGTH 6
int main()
{
    int array[LENGTH] = {1, 2, -2, 3, 2, 6};
    int negative = 0, positive = LENGTH - 1;
    while (negative <= positive)
    {
        if (array[negative] >= 0 && array[positive] < 0)
        {
            swap(array[negative], array[positive]);
            negative++;
            positive--;
        }
        else if (array[negative] >= 0 && array[positive] > 0)
        {
            positive--;
        }
        else
        {
            negative++;
            positive--;
        }
    }
    for (int i = 0; i < LENGTH; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

// A C++ program to put all negative
// numbers before positive numbers

// using namespace std;

// void rearrange(int arr[], int n)
// {
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             if (i != j)
//                 swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

// // A utility function to print an array
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// // Driver code
// int main()
// {
//     int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     rearrange(arr, n);
//     printArray(arr, n);
//     return 0;
// }