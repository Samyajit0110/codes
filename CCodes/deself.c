#include <stdio.h>
int queue[6];
#define MAX 6
int front = -1, rear = -1;
int number;
void rearPush()
{
    printf("Enter number to be pushed\n");
    scanf("%d", &number);
    if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[front] = number;
    }
    else
    {
        if (rear >= MAX - 1)
        {
            printf("Queue overflow\n");
        }
        else
        {
            rear++;
            queue[rear] = number;
        }
    }
}
void frontPush()
{
    printf("Enter number to be pushed\n");
    scanf("%d, ", &number);
    if (front == -1)
    {
        front = 0;
        rear = 0;
        queue[front++] = number;
    }
    else
    {
        if (front <= -1)
        {
            printf("queue overflow\n");
        }
        else
        {
            front--;
            queue[front] = number;
        }
    }
}
void frontPop()
{
    if (front <= -1 || front > rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("popped element is %d\n", queue[front++]);
    }
}
void rearPop()
{
    if (front <= -1 || front > rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("popped element is %d\n", queue[rear--]);
    }
}
void display()
{
    int i;
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void main()
{
    int choice;
    printf("1 and 2 for front and rear push\n3 and 4 for front and rear pop\n");
    printf("5 for exit and 6 to display\n");
    do
    {
        printf("Enter choice\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            frontPush();
        }
        if (choice == 2)
        {
            rearPush();
        }
        if (choice == 3)
        {
            frontPop();
        }
        if (choice == 4)
        {
            rearPop();
        }
        if (choice == 5)
        {
            printf("see ya later\n");
        }
        if (choice == 6)
        {
            display();
        }
        else
        {
            printf("Enter valid choice 1/2/3/4/5/6\n");
        }
    } while (choice != 5);
}

