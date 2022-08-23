#include <stdio.h>
#include <stdlib.h>
void main()
{
  int array[25];
  int i, key;
  printf("Enter elements\n");
  for (i = 0; i < 25; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("Enter the element to be searched\n");
  scanf("%d", &key);
  for (i = 0; i < 25; i++)
  {
    if (key == array[i])
    {
      printf("Element found\n");
      exit(0);
    }
  }
  printf("Element not found\n");
}
