#include<stdio.h>
void main()
{
    int a = 0,b = 1,sum = 0, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d %d ", a,b);
    for(int i = 1; i < n - 1; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ",sum);
    }
}
