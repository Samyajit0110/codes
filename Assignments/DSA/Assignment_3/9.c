// C Program to demonstrate Printing
// of the first letter of each word
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "GeeksforGeeks, A computer science portal "
                 "for geeks";
    int i, j = 0;

    for (i = 0; i < strlen(str); i++)
    {
        if (i == 0 && str[i] != ' ')
        {
            printf("%c ", str[i]);
        }
        else if (i > 0 && str[i - 1] == ' ')
        {
            printf("%c ", str[i]);
        }
    }
    return 0;
}
