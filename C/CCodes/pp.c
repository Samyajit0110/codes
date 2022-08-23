#include <stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;
    printf("enter the radius \n");
    scanf("%d", &r);
    printf("enter the height \n");
    scanf("%d", &h);
    printf("the area of circle is %f \n", pi * r * r);
    printf("the volume of cylinder is %f \n", pi * r * r * h);
    return 0;
}