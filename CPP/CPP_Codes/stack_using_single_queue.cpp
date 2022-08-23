#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int choice, data;
    queue<int> q0;
    do
    {
        cout << "Enter choice 1 - push\t2 - pop\t0 - exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data" << endl;
            cin >> data;
            q0.push(data);
            for (int i = 0; i < q0.size() - 1; i++)
            {
                q0.push(q0.front());
                q0.pop();
            }
            break;
        case 2:
            if (q0.empty())
            {
                cout << "Queue is empty" << endl;
            }
            cout << q0.front() << endl;
            q0.pop();
            break;
        }
    } while (choice);

    return 0;
}
