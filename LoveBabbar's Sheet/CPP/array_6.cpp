#include <iostream>
using namespace std;

#define LENGTH1 6
#define LENGTH2 8
int main()
{
    int array1[LENGTH1] = {1, 2, 3, 4, 5, 6};
    int array2[LENGTH2] = {2, 3, 4, 5, 6, 7, 8, 9};
    int resultant[LENGTH2] = {0};
    // finding union
    for (int i = 0; i < LENGTH1; i++)
    {
        cout << array1[i] << " ";
    }
    for (int j = 0; j < LENGTH2; j++)
    {
        if (array2[j] > array1[LENGTH1 - 1])
        {
            cout << array2[j] << " ";
        }
    }
    cout << endl;
    // finding intersection
    for (int i = 0; i < LENGTH2; i++) // taking the length of the larger one to reduce total iterations
    {
        for (int j = 0; j < LENGTH1; j++)
        {
            if (array2[i] == array1[j])
            {
                cout << array2[i] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
