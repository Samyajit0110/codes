#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_string;
    int i, j = 0, length, mid;
    cout << "Enter a string\n";
    cin >> user_string;
    length = user_string.length();
    if (length % 2 == 0)
    {
        for (i = length - 1; i >= length / 2; i--)
        {
            if (user_string.at(j) != user_string.at(i))
            {
                cout << "Not a pallindrome\n";
                exit(0);
            }
            j++;
        }
    }
    else
    {
        for (i = length - 1; i >(int)length / 2; i--)
        {
            if (user_string.at(j) != user_string.at(i))
            {
                cout << "Not a pallindrome\n";
                exit(0);
            }
            j++;
        }
    }
    cout<<user_string<<" is pallindrome\n";
    return 0;
}