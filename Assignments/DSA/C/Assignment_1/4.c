#include <stdio.h>
void main()
{
    int a = 0, b = 1;
    int sum = 0;
    printf("Enter n\n");
    int n;
    scanf("%d", &n);
    printf("%d ",b);
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        sum *= sum;
        printf("%d ", sum);
    }
}