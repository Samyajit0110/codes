#include<stdio.h>
int max(int a, int b)
    {
        if(a>=b)
            return a;
        else
            return b;
    }
int min(int a, int b)
    {
    if(a<=b)
            return a;
        else
            return b;
    }
void main()
{
    printf("enter size of array\n");
    static int const size = 0; //static lvalue
    scanf("%d",&size);
    int container[size];
    int i = 0;
    printf("Enter elements\n");
    while(i<size)//accepting elements
    {
        scanf("%d",&container[i]);
        i++;
    }
    int maximum = 0;
    int minheight = 0;
    int j = 0;
    for(i = 0;i < size;i++)//outer loop for first vertical column
    {
        for(j = 1;j < size;j++)//inner loop for second vertical column
        {
            minheight = min(container[i],container[j]);//minimum height for the vessel 
            maximum = max(maximum,(minheight*(j - i)));//maximum area among all the vessels
        } 
    }
    printf("Maximum area:%d",maximum);
}
