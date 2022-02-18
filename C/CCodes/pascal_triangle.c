/*#include <stdio.h>
int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}*/
//********using array********
#include <stdio.h>
 
void main()
{
    int array[30], temp[30], i, j, k, l, num;           //using 2 arrays
 
    printf("Enter the number of lines to be printed: ");
    scanf("%d", &num);
    temp[0] = 1;
    array[0] = 1;
    for (j = 0; j < num; j++)
        printf(" ");
    printf(" 1\n");
    for (i = 1; i < num; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (k = 1; k < num; k++)
        {
            array[k] = temp[k - 1] + temp[k];      
        }
        array[i] = 1;
        for (l = 0; l <= i; l++)
        {
            printf("%3d", array[l]);
            temp[l] = array[l];
        }
        printf("\n");
    }
}