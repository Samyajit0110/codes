#include <iostream>
using namespace std;

#define LENGTH 6

int main()
{
    int array[LENGTH] = {1, 2, 3, 4, 5, 6};
    int swap_till, third_variable;
    if (LENGTH % 2 == 0)
        swap_till = LENGTH / 2;
    else
        swap_till = (LENGTH / 2) - 1;
    for (int i = 0; i < swap_till; i++)
    {
        third_variable = array[i];
        array[i] = array[(LENGTH - i) - 1];
        array[(LENGTH - i) - 1] = third_variable;
    }

    for (int i = 0; i < LENGTH; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}


// gfg solution
// Iterative C++ program to reverse an array
// using namespace std;

// /* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end)
// {
// 	while (start < end)
// 	{
// 		int temp = arr[start];
// 		arr[start] = arr[end];
// 		arr[end] = temp;
// 		start++;
// 		end--;
// 	}
// }	

// /* Utility function to print an array */
// void printArray(int arr[], int size)
// {
// for (int i = 0; i < size; i++)
// cout << arr[i] << " ";

// cout << endl;
// }

// /* Driver function to test above functions */
// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6};
	
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// To print original array
// 	printArray(arr, n);
	
// 	// Function calling
// 	rvereseArray(arr, 0, n-1);
	
// 	cout << "Reversed array is" << endl;
	
// 	// To print the Reversed array
// 	printArray(arr, n);
	
// 	return 0;
// }