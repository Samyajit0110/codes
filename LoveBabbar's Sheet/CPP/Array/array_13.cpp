#include <iostream>
using namespace std;
// kedane's algorithm
#define LENGTH 6
int main()
{
    int *array = new int[LENGTH]{1, 2, -3, -4, 5, 6}; // dynamically declaring array
    int max_index_wise = 0, max_attained = array[0];  // for accumulating sum and storing the
                                                      // max accumalated respectively
    for (int i = 0; i < LENGTH; i++)
    {
        max_index_wise += array[i];
        if (max_attained < max_index_wise)
        {
            max_attained = max_index_wise;
        }
        if (max_index_wise < 0)
        {
            max_index_wise = 0;
        }
    }
    cout << "max sum: " << max_attained;
    return 0;
}