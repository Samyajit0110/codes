#include <stdio.h>
void main()
{
    FILE *file;
    file = fopen("testDoc.txt", "a");
    char str[10];
    printf("Enter data\n");
    gets(str);
    fprintf(file,"%s",str);
}