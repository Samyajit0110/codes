#include<stdio.h>
void main()
{
    int number;
    scanf("%d", number);
    int digit = 0, temp = number, count = 0;
    while(temp > 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        if(digit == 0)
            count ++;
    }
    printf("%d", count);
}


