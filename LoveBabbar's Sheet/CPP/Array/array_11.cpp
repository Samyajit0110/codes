#include <iostream>
using namespace std;

#define LENGTH 50
int main()
{
    int n, i;
    cout << "Enter n" << endl;
    cin >> n;
    int array[LENGTH] = {0}; // initialising array to 0
    int max;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        if (i == 0)
            max = array[i]; // initialising max to the first element in the array
        if (array[i] > max)
            max = array[i];
    }
    int *frequency = new int[max]{0}; // dynamically declaring array and initialising it to 0
    for (i = 0; i < n; i++)
    {
        frequency[array[i]] += 1; // incrementing frequency in frequency array(count sort method)
    }
    for (i = 0; i < max + 1; i++) //(max+1) because max is the last existent element in the array
    {
        if (frequency[i] > 0)
        {
            cout << i << " : " << frequency[i] << endl;
        }
    }
    return 0;
}
