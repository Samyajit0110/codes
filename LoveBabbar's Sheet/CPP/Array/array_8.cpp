#include <iostream>
using namespace std;

// kedane's algorithm
#define LENGTH 6
int main()
{
    int array[LENGTH] = {-1, -2, 3, 2, -4, 5};
    int max_accumulated = 0; // sum accumulated by iterating through the array
    int max = array[0];      // storing the maximum sum accumulated
    for (int i = 0; i < LENGTH; i++)
    {
        max_accumulated += array[i]; // adding elements to sum
        if (max < max_accumulated)   // replacing sum with collected sum if found greater
        {
            max = max_accumulated;
        }
        if (max_accumulated < 0) // if sum accumulated is negative then rounding that up to 0
        // effectively ignoring it in the max sum
        {
            max_accumulated = 0;
        }
    }
    cout << "max sum: " << max;
    return 0;
}