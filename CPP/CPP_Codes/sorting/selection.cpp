#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter no. of elements" << endl;
    cin >> n;
    v.resize(n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    print(v);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    print(v);
    return 0;
}