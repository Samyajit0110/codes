#include <stdio.h>
#include <stdlib.h>
// works only for 0-9
#define MAX 10
void main()
{
    int i, n, input;
    printf("Enter no. of elements\n");
    scanf("%d", &n);
    int *array = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int *hash = (int *)calloc(MAX, sizeof(int));
    for (i = 0; i < n; i++)
    {
        hash[array[i]]++;
    }
    for (i = 0; i < MAX; i++)
    {
        if (hash[i] == 1)
        {
            printf("%d ", i);
        }
    }
}
