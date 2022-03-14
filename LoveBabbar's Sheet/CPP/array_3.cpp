#include <iostream>
#include <vector>
using namespace std;

#define LENGTH 6
int main()
{
    int array[LENGTH] = {1, 2, 2, 1, 3, 4};
    int unique_elements[10] = {0};
    for (int i = 0; i < LENGTH; i++)
    {
        unique_elements[array[i]]++;
    }
    vector<int> unique_elements_vector;
    for (int i = 0; i < LENGTH; i++)
    {
        if (unique_elements[i] > 0)
        {
            unique_elements_vector.push_back(unique_elements[i]);
        }
    }
    cout << "Enter K" << endl;
    int k;
    cin >> k;
    cout << "Kth max element: " << unique_elements_vector[LENGTH - k] << endl;
    cout << "kth min element: " << unique_elements_vector[k - 1];
}
