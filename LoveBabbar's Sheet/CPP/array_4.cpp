#include <iostream>
using namespace std;

#define LENGTH 6
// swapping could be replaced by swap(arg a , arg b);
int main()
{
    int array[LENGTH] = {0, 0, 1, 0, 2, 0};
    int third_variable;                      // for swapping
    int low = 0, mid = 0, high = LENGTH - 1; // for segregating 0 in low, 1 in mid and 2 in high.
    while (mid <= high)
    {
        if (array[mid] == 0)
        {
            third_variable = array[mid];
            array[mid] = array[low];
            array[low] = third_variable;
            mid++;
            low++;
        }
        else if (array[mid] == 1)
        {
            mid++;
        }
        else if (array[mid] == 2)
        {
            third_variable = array[mid];
            array[mid] = array[high];
            array[high] = third_variable;
            high--;
        }
    }
    for (int i = 0; i < LENGTH; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

// gfg solution
//  void sort012(int a[], int n)
//  {
//      int low = 0, high = n - 1, mid = 0;

//     while (mid <= high)
//     {

//         if (a[mid] == 0)
//             swap(a[mid++], a[low++]);

//         else if (a[mid] == 1)
//             mid++;

//         else
//             swap(a[mid], a[high--]);
//     }
// }

// int main()
// {
//     int array[6] = {0, 0, 1, 0, 2, 0};
//     sort012(array, 6);
//     for (int i = 0; i < 6; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
