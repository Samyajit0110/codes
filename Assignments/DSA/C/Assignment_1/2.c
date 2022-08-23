#include <stdio.h>
#define N 4
void main()
{
    int space = N - 1;
    int character = 65;
    for (int i = 1; i <= N; i++)
    {
        for (int sp = space; sp > 0; sp--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",character);
        }
        character++;
        space--;
        printf("\n");
    }
}
