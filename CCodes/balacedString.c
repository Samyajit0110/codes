#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20];
    char s2[20];
    gets(s1);
    gets(s2);
    int i = 0;
    int j = i;
    int flag = 0;
    while(s1[i] != '\0')
    {
        flag = 0;
        j = 0;
        while(s2[j] != '\0')
        {
            if(s1[i] == s2[j])
                flag = 1;
            j++;
        }
        if(flag == 0)
        {
            puts("nopes");
            break;
        }
        i++;
        }
        if(flag == 1)
        {
            puts("yeps");
    }
}
