#include <iostream>
using namespace std;

void merge(int array[], int low, int mid, int high)
{
    int subArrayOne = mid - low + 1;
    int subArrayTwo = high - mid;
    int *subArray1 = new int[subArrayOne],
        *subArray2 = new int[subArrayTwo];

    for (int i = 0; i < subArrayOne; i++)
        subArray1[i] = array[low + i];
    for (int j = 0; j < subArrayTwo; j++)
        subArray2[j] = array[mid + 1 + j];
    int indexOfSubArrayOne = 0,
        indexOfSubArrayTwo = 0;
    int indexOfMergedArray = low;
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if (subArray1[indexOfSubArrayOne] <= subArray2[indexOfSubArrayTwo])
        {
            array[indexOfMergedArray++] = subArray1[indexOfSubArrayOne++];
        }
        else
        {
            array[indexOfMergedArray++] = subArray2[indexOfSubArrayTwo++];
        }
    }

    while (indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMergedArray++] = subArray1[indexOfSubArrayOne++];
    }

    while (indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMergedArray++] = subArray2[indexOfSubArrayTwo++];
    }
    delete[] subArray1;
    delete[] subArray2;
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

// Driver code
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is \n";
    printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
