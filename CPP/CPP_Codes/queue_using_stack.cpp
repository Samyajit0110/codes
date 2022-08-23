#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> input;
    stack<int> output;
    int choice, data;
    do
    {
        cout << "Enter choice 1 - push\t2 - pop\t0 - exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data" << endl;
            cin >> data;
            input.push(data);
            break;
        case 2:
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            cout << output.top() << endl;
            output.pop();
        }
    } while (choice);
    return 0;
}