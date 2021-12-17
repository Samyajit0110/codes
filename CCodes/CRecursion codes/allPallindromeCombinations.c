// recursion
#include <stdio.h>
int isPallindrome(int start, int end, char string[])
{
    while (start < end)
    {
        if (string[start] != string[end])
        {
            return 0;
        }
        end--;
        start++;
    }
    return 1;
}
void allPallindrome()
{
}
void main()
{
    char name[5] = "maam";
    if (isPallindrome(0, 3, name))
    {
        printf("pallindrome");
    }
    else
        printf("nope");
}
