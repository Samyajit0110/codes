#include <stdio.h>
#include <stdbool.h>
// recursion
bool isPrime(int x, int i)
{
    //i has to be initialised with 2
    if (i == x)
    {
        return true;
    }
    if (x % i == 0)
    {
        return false;
    }
}
void main()
{
    if (isPrime(2, 2))
    {
        printf("prime");
    }
    else
    {
        printf("nope");
    }
}
