#include<stdio.h>
void main()
{
    int lines;
    printf("Enter the number of lines\n");
    scanf("%d", &lines);
    int i,j;
    for(i = 1; i <= lines; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d",j);
        printf("\n");
    }
}