#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int n1 = 0;
    int n2 = 0;
    printf("Enter two numbers: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    int result  = gcd(n1,n2);
    printf("GCD : %d", result);
    return 0;
}