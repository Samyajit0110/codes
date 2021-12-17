#include <stdio.h>
void main()
{
    int line;
    scanf("%d", &line);
    int i = line;
    int j = 0;
    while(i >= 1)
    {
        j = line;
        while(j >= i)
        {
            printf("%d", j);
            --j;
        }
        printf("\n");
        i--;
    }
}
