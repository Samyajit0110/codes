#include<stdio.h>
#include<string.h>
void main()
{
    char name[] = "roach";
    char first = (int)name[2] - 32;
    name[2] = first;
    puts(name);
}