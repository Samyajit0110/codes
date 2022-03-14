#include <iostream>
#include <vector>
using namespace std;

#define LENGTH 6
int main()
{
    int array[LENGTH] = {6, 2, 33, 66, 3, 1};
    int max, min;
    max = min = array[0];
    for (int i = 0; i < LENGTH; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "Max element and Min element respectively: \n"
         << max << " and " << min;
    return 0;
}

// gfg solution
//  C++ program of above implementation
//  #include<iostream>
//  using namespace std;

// // Pair struct is used to return
// // two values from getMinMax()
// struct Pair
// {
// 	int min;
// 	int max;
// };

// Pair getMinMax(int arr[], int n)
// {
// 	struct Pair minmax;
// 	int i;

// 	// If there is only one element
// 	// then return it as min and max both
// 	if (n == 1)
// 	{
// 		minmax.max = arr[0];
// 		minmax.min = arr[0];
// 		return minmax;
// 	}

// 	// If there are more than one elements,
// 	// then initialize min and max
// 	if (arr[0] > arr[1])
// 	{
// 		minmax.max = arr[0];
// 		minmax.min = arr[1];
// 	}
// 	else
// 	{
// 		minmax.max = arr[1];
// 		minmax.min = arr[0];
// 	}

// 	for(i = 2; i < n; i++)
// 	{
// 		if (arr[i] > minmax.max)
// 			minmax.max = arr[i];

// 		else if (arr[i] < minmax.min)
// 			minmax.min = arr[i];
// 	}
// 	return minmax;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1000, 11, 445,
// 				1, 330, 3000 };
// 	int arr_size = 6;

// 	struct Pair minmax = getMinMax(arr, arr_size);

// 	cout << "Minimum element is "
// 		<< minmax.min << endl;
// 	cout << "Maximum element is "
// 		<< minmax.max;

// 	return 0;
// }

// // This code is contributed by nik_3112
