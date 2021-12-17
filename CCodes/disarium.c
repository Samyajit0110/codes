#include <stdio.h>
#include <math.h>
void main()
{
    printf("Enter a number to be scanned\n");
    int number;
    scanf("%d", &number);
    int count, temp = number;
    while (temp > 0) //counting digits
    {
        count++;
        temp /= 10; // ehe te nandayoooooooo
    }
    int lastDigit = 0;
    temp = number;
    int sum = 0;
    while (temp > 0)
    {
        lastDigit = temp % 10;
        sum += pow(lastDigit, count); //finding sum
        temp /= 10;
        count--;
    }
    if (sum == number)
    {
        printf("%d is a disarium number", number); // eg: 135 = 1^1 + 3^2 + 5^3 = 135
    }
    else
    {
        printf("nope");
    }
}