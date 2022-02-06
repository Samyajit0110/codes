#include <stdio.h>
int queue[5];
int length = 5, front = -1, rear = -1;
void enqueue()
{
    int element;
    if ((rear + 1) % length == front) // condition to check queue is full
    {
        printf("Queue is overflow..");
        return;
    }
    printf("Enter element");
    scanf("%d", &element);
    if (front == -1 && rear == -1) // condition to check queue is empty
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else
    {
        rear = (rear + 1) % length;
        queue[rear] = element;
    }
}
void dequeue()
{
    int popped;
    
}
void main()
{
    enqueue();
    enqueue();
}
