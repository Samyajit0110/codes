#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble(vector<int> &_vector)
{
    for (int i = 0; i < _vector.size() - 1; i++)
    {
        for (int j = 0; j < _vector.size() - 1 - i; j++)
        {
            if (_vector[j] > _vector[j + 1])
            {
                swap(_vector[j], _vector[j + 1]);
            }
        }
    }
}

void bin_search(vector<int> &_vector, int &to_be_found)
{
    int mid = (int)_vector.size() / 2;
    while (_vector[mid] != to_be_found && _vector[mid] > -1 && _vector[mid] < _vector.size())
    {
        if (_vector[mid] > to_be_found)
            mid = (mid + _vector.size()) / 2;
        else
            mid = (mid - _vector.size()) / 2;
    }
    if(_vector[mid]==to_be_found)
    cout<<"found "<<_vector[mid];
}
int main()
{
    vector<int> roll = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubble(roll);
    for(int value:roll)
    {
        cout<<value<<endl;
    }
    return 0;
}