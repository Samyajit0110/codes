#include <iostream>
#include <queue>

using namespace std;

void print_queue(queue<int> q);

int main()
{
    queue<int> q1;
    queue<int> q2;
    int choice, element;
    do
    {
        cout << "Enter choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element\n";
            cin >> element;
            q2.push(element);
            while (!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1, q2);
            break;
        case 2:
            cout << q1.front() << endl;
            q1.pop();
            break;
        }
    } while (choice);
    return 0;
}
