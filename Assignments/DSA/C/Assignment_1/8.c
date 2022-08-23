#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void main()
{
    int i, n;
    printf("Enter no. of elements\n");
    scanf("%d", &n);
    int *array = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    int second_max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (array[i] > second_max && array[i] != max)
        {
            second_max = array[i];
        }
    }
    printf("Second largest = %d", second_max);
}
