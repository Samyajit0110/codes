#include <iostream>
using namespace std;

int main()
{
    int array[50];
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int i, j, key;
    for (int i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
