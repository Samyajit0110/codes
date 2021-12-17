#include<stdio.h>
int a,b,result,n;
void fibonacci(int x)
{
    
    if(result < n)
    {
        result = a + b;
        a = b;
        b = result;
        if(result <= n)
            printf("%d ",result);
        fibonacci(result);
    }
    else
    {
        printf("\n");
    }
}
void main()
{
   a = 0;
   b = 1;
   result = 0;
   printf("Enter last term\n");
   scanf("%d",&n);
   printf("%d %d ",a,b);
   fibonacci(n); 
}
