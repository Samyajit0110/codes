#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *array;
}stack1;
void push(int element)
{
    stack1.array[stack1.top] = element;
    stack1.top++;
}
int pop()
{
    int popped;
    popped = stack1.array[stack1.top];
    free(stack1.array[stack1.top]);
    return (popped);
}
void main()
{
    // struct stack stack1;
    stack1.size = 10;
    stack1.array = malloc(stack1.size * sizeof(int));
    push(80);
}
