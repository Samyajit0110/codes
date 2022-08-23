#include <stdio.h>
void main()
{
    int count = 1, element_count = 1;
    for (; count <= 5; count++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (element_count % 2 == 0)
            {
                printf("#");
            }
            else
                printf("*");
            element_count++;
        }
        printf("\n");
    }
}
