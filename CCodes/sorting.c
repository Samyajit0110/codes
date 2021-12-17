#include <stdio.h>
int length = 10;
void selectionSort(int a[])
{
    int i = 0, j = 0, min = 0, temp;
    min = a[0];
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void bubbleSort(int a[])
{
    int i, j, temp;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (a[j] >= a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void insertionSort(int a[])
{
    int i, key, j;
    for (i = 1; i < length; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[100], R[100];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    /* Merge the temp arrays back into a[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }
}
void printArray(int a[])
{
    int i = 0, j = 10;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void main()
{
    int array[] = {9, 8, 7, 3, 4, 0, 2, 1, 7, 5};
    printf("Original array\n");
    printArray(array);
    printf("sorted array\n");
    // selectionSort(array);
    //bubbleSort(array);
    int array_size = sizeof(array) / sizeof(array[0]);
    mergeSort(array, 0, array_size - 1);
    printArray(array);
}
