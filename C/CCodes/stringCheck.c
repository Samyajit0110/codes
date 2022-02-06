#include<stdio.h>
#include<string.h>
char string[20];
int uppercase(char x[], int l)
{
    int i = 0;
    for(i = 0;i < l; i++)
    {
        string[i] = string[i] - 32;
    }
}
void main()
{
    int c,p = 0;
    for(c = 0; (c = getchar()) != EOF;)
    {
        string[p] = c;
        p++;
    }
    
    int length = strlen(string);
    uppercase(string, length);   
    int i;
    p = 1;
    for(i = 0; i < length-1; i++)
    {
        if(string[i] - string[p] == 1)
            printf("%s %s",string[i],string[p]);
        p++;
    }

}