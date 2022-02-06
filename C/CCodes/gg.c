#include <stdio.h>
void main()
{
  int length = 0, getInput;
  int array[50];
  for (int i = 0; i < 50; i++)
  {
    printf("get input\n");
    scanf("%d", &getInput);
    if (getInput == 0)
      break;
  }
}
