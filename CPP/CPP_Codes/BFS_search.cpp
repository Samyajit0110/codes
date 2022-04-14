#include <iostream>
using namespace std;

#define SIZE 400
int adjacency[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};
struct queue
{
    int front, rear;
    int array[400];
};

int isEmpty(queue *queue)
{
    if (queue->front == queue->rear)
    {
        return 1;
    }
    return 0;
}

void push(queue *queue, int data)
{
    if (SIZE == queue->rear + 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    queue->array[queue->rear++] = data;
}

int pop(queue *queue)
{
    int popped;
    if (!isEmpty(queue))
    {
        return queue->array[queue->front++];
    }
    return -1;
}

int main()
{
    queue *queue0;
    queue0->front = 0;
    queue0->rear = 0;
    int visited[7] = {0};
    int origin = 0;
    visited[origin] = 1;
    push(queue0, origin);
    while (!isEmpty(queue0))
    {
        int popped = pop(queue0);
        for (int j = 0; j < 7; j++)
        {
            if (adjacency[popped][j] == 1 && visited[j] == 0)
            {
                push(queue0, j);
                visited[j] = 1;
                cout << j << " ";
            }
        }
    }
}