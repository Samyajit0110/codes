#include <stdio.h>
void main()
{
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{7, 8}, {9, 10}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    // taking input in matrix
    int mat_user[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &mat_user[i][j]);
        }
    }
}
