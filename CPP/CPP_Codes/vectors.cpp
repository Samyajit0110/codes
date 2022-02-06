#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // vector<int> vector_1 = {1, 2, 3, 6, 5, 4}; // initialiation
    // vector<int> vector_2(10, 8);               // initialised 10 elements with each set to 8
    // for (int &value : vector_1) // without copying the elements
    // {
    //     cout << value << endl;
    // }
    // cout << endl;
    // using it = vector<int>::iterator;
    // for (it _iterator = vector_1.begin(); _iterator != vector_1.end(); _iterator++)
    // {
    //     cout << *_iterator << endl;
    // }
    pair<string, int> pair_1("string", 0);
    cout << pair_1.first;
    cout << "\n"
         << pair_1.second;

    return 0;
}