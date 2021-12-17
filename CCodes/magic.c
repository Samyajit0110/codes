#include <stdio.h>
void main()
{
    int num = 0;
    scanf("%d",&num);
    int sum = 10,temp,digit,s = 0;
    temp = num;
    while (sum > 9)
    {
        while (temp > 0)
        {
            digit = temp % 10;
            s += digit;
            temp /= 10;
        }
        sum = s;
        s = 0;
        temp = sum;
    }
    if (sum == 1)
    {
        printf("magic number");
    }
    else
    {
        printf("nope");
    }   
}