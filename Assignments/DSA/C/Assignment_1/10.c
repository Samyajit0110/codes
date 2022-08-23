#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, m;
    printf("Enter m and n\n");
    scanf("%d%d", &m, &n);
    int i;
    int *arrayM, *arrayN;
    arrayM = calloc(m, sizeof(int));
    arrayN = calloc(n, sizeof(int));
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arrayM[i]);
    }
    printf("-------------------------------\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arrayN[i]);
    }
    int *arrayM_N = calloc(m + n, sizeof(int));
    for (i = 0; i < m; i++)
    {
        arrayM_N[i] = arrayM[i];
    }
    int cpos = i;
    for (i = 0; i < n; i++)
    {
        arrayM_N[cpos++] = arrayN[i];
    }
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", arrayM_N[i]);
    }
}
