#include <stdio.h>
#include <stdlib.h>
#define CAP 10
void main()
{
    int cap = CAP;
    int array[CAP] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int to_be_deleted;
    printf("Enter position of element to be deleted\n");
    scanf("%d", &to_be_deleted);
    if (to_be_deleted >= CAP)
    {
        printf("Invalid input");
        exit(0);
    }
    for (int i = 0; i < CAP; i++)
    {
        if (i == to_be_deleted)
        {
            for (int j = i + 1; j < CAP; j++)
            {
                array[j - 1] = array[j];
            }
        }
    }
    cap--;
    for(int i = 0;i<cap;i++)
    {
        printf("%d ",array[i]);
    }
}
