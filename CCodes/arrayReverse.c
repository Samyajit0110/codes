#include<stdio.h>
#include<string.h>
void main()
{
    char array[] = "leloo";
    char temp;
    int i = 0, length = strlen(array);
    while(i <= 5 && length >= 0 && i != length)
    {
        temp = array[i];
        array[i] = array[length];
        array[length] = temp;
        i++;
        length--;
    }
    puts(array);
}
