#include<stdio.h>
void main()
{
    int i = 0, num;
    printf("Enter number of rows");
    scanf("%d",&num);
    int j;
    j = i;
    int space = num;
    while(i <= num)
    {
        while(space > 0)
        {
            printf(" ");
            space--;
        }
        printf("\n");
        while(j <= i);
        {
            printf("*");
            j--;
        }
        printf("\n");
        i++;
    }
}