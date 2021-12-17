#include<stdio.h>
int res[20];
void converter(int decimal, int base)
{
    int p = 0,temp = 0;
    while(decimal > 0)
    {
        res[p] = decimal % base;
        decimal /= base;
        p++;
    }   
    for(int i = p - 1, j = 0; i != j ; i++,j--)
    {
        temp = res[i];
        res[i] = res[j];
        res[j] = temp;
    }
}
void main()
{
    for(int i = 0; i < 20; i++)
    {
        res[i] = 0;
        printf("%d",res[i]);
    }
    printf("\n");
    printf("Enter target base\nEnter decimal\n");
    int decimal;
    int base;
    scanf("%d",&base);
    scanf("%d",&decimal);
    converter(decimal,base);
}
