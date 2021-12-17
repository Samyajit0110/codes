#include<stdio.h>
void main()
{
    int a = 0,b = 1,sum = 0, n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("%d %d ", a,b);
    for(int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ",sum);
    }
}
