#include <iostream>
using namespace std;

// using arrays
class circular_queue
{
private:
    int front = -1, rear = -1;
    int to_be_pushed;
    static int const length = 10;
    int queue[length];

public:
    void push();
    void pop();
    void peek();
};

void circular_queue::push()
{
    cout << "Enter element" << endl;
    cin >> to_be_pushed;
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = to_be_pushed;
    }
    if (rear + 1 % length == front)
    {
        cout << "queue full" << endl;
    }
    else
    {
        rear = (rear + 1) % length;
        queue[rear] = to_be_pushed;
    }
}

int main()
{
    circular_queue queue;
    for (int i = 1; i <= 11; i++)
    {
        queue.push();
    }
    return 0;
}