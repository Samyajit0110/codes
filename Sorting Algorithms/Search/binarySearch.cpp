#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int low = 0, high = 9, mid, key;
    cout << "Enter key\n";
    cin >> key;
    while (low != high)
    {
        mid = (low + high) / 2;
        if (array[mid] == key)
        {
            cout << "Element has been found";
            exit(0);
        }
        if (key > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}