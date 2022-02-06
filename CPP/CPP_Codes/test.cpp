#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubblesort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

void display(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[100];
	int l;
	cout << "Enter the number of elements:";
	cin >> l;
	for (int i = 0; i < l; i++)
	{
		cin >> arr[i];
	}
	// int n = sizeof(arr) / sizeof(arr[0]);
	int n = 6;
	bubblesort(arr, n);
	cout << "Sorted array:";
	display(arr, n);
}
