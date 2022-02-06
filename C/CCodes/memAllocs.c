#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr = NULL;
    int size = 0, i = 0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    ptr = malloc(size * sizeof(int)); //using malloc to dynamically allocate memory
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d element in memory(array) \n", i);
        scanf("%d", &ptr[i]); //inputting elements to memory from user
    }
    ptr = realloc(ptr, 4 * sizeof(int)); //reallocating existing memory  using realloc
    printf("memory after reallocating %d\n", ptr[i]);
    for(i = 0;i<4;i++)
    {
        printf("enter element in %d position\n",i);
        scanf("%d",&ptr[i]);
    }
    printf("%d\n",ptr[1]);
    free(ptr);// freeing memory at ptr by using free function
    printf("%d\n",ptr[1]);
    //calloc (contiguous) allows contiguous memory allocation and initialises each with a 0;
}