#include <stdio.h>
#include <stdlib.h>
#define CAP 10
void main()
{
    int array[CAP] = {1, 2, 3, 6, 7, 8};
    int k;
    int store, temp;
    printf("Enter k\n");
    scanf("%d", &k);
    printf("Enter position\n");
    int pos;
    scanf("%d", &pos);
    if (pos >= CAP)
    {
        printf("Invalid input");
        exit(0);
    }
    int i;
    for (i = 0; i < CAP; i++)
    {
        if (i == pos)
        {
            store = array[pos];
            for (int j = i + 1; j < CAP; j++)
            {
                temp = array[j];
                array[j] = store;
                store = temp;
            }
        }
    }
    array[pos] = k;
    for (i = 0; i < CAP; i++)
    {
        printf("%d ", array[i]);
    }
}