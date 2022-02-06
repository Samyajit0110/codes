#include <stdio.h>
void upperCase(char str[])
{
    int i;
    while (str[i] != '\0')
    {
        str[i] = (int)str[i] - 32; //only for small letters
        i++;
    }
    puts(str);
}
void consecutiveChars(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if ((int)str[i + 1] - (int)str[i] == 1 || (int)str[i + 1] - (int)str[i] == -1)
        {
            printf("%c and %c\n", str[i], str[i + 1]);
        }
        i++;
    }
}
void main()
{
    char str[50];
    gets(str);
    upperCase(str);
    consecutiveChars(str);
}