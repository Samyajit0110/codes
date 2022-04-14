#include <iostream>
using namespace std;

#define LENGTH 6

int main()
{
    int array[LENGTH] = {1, 2, 3, 4, 5, 6};
    int rotated = array[LENGTH - 1];
    for (int i = LENGTH - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = rotated;
    for (int i = 0; i < LENGTH; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}