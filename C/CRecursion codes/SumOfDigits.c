#include<stdio.h>
//recursion
int sum(int x,int sumDigits)
{
    if(x==0)
    {
        return sumDigits;
    }
    sumDigits+= x%10;
    return sum(x/10,sumDigits);

}
void main()
{
    int result = 0;
    printf("%d",sum(420,result));
}
 