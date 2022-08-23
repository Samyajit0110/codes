#include <stdio.h>
#include <stdlib.h>
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
    printf("Enter no. to be searched frequency\n");
    int k, frequency = 0;
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        if (array[i] == k)
        {
            frequency++;
        }
    }
    if (frequency > 0)
    {
        printf("Frequency = %d", frequency);
    }
    else
        printf("dosen't exist");
}
