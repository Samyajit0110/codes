#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>::iterator high, low;
    vector<int> nums;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }
    high = nums.end();
    low = nums.begin();
    cout << " " << *high << " " << *low;
}
