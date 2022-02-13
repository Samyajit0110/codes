#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int i, j, space = n - 1, spCount = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (space = spCount; space > 0; space--)
        {
            printf(" ");
        }
        spCount--;
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
