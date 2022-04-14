#include <iostream>
using namespace std;

#define LENGTH 50
int main()
{
    cout << "Enter n";
    int n, i;
    int jump = 0, jump_counter = 0;
    cin >> n;
    int array[LENGTH];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < n;)
    {
        jump += array[i];
        i = jump;
        jump_counter++;
        if (jump == n - 1)
        {
            cout << "End reached" << endl;
            cout << "Number of jumps needed : " << jump_counter << endl;
            return 0;
        }
    }
    cout << "Could'nt reach end " << endl;
}
