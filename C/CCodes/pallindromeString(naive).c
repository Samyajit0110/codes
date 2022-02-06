#include<stdio.h>
void main()
{
   char name[12];
   char revName[12];
   gets(name);
   int i = 0,length= 0,c = 0,flag = 1;
   while(name[i] != '\0')
   {
       i+=1;
   }
   length = i;
   for(i = length - 1; i >= 0;i--)
   {
       revName[c] = name[i];
       c++;
   }
  for(i = 0; i < length - 1; i++)
  {
      if(name[i]!=revName[i])
      {
          puts("Not pallindrome");
          flag = 0;
          break;
      }
  }
  if (flag == 1)
  {
      puts("pallindrome");
  }
}
