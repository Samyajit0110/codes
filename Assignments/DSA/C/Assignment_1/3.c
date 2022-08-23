#include <stdio.h>
#define N 4
void main()
{
    int count = 1, space = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int sp = space; sp > 0; sp--)
        {
            printf(" ");
        }
        space--;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count++);
        }
        printf("\n");
    }
}
