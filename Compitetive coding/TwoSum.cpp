#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{-1, -2, 3, 4, -5, 6};
    int i, j, sum_got = 0;
    int target = 1;
    vector<int> result_indices(2, 0);
    for (i = 0; i < num.size(); i++)
    {
        for (j = i + 1; j < num.size(); j++)
        {
            if (num[i] > target)
            {
                if (num[j] <= 0)
                {
                    sum_got = num[i] + num[j];
                    if (sum_got == target)
                    {
                        result_indices[0] = i;
                        result_indices[1] = j;
                    }
                    sum_got = 0;
                }
            }
            if (num[i] < target)
            {
                if (num[j] >= 0)
                {
                    sum_got = num[i] + num[j];
                    if (sum_got == target)
                    {
                        result_indices[0] = i;
                        result_indices[1] = j;
                    }
                    sum_got = 0;
                }
            }
        }
    }
    for (int x : result_indices)
    {
        cout << x << " ";
    }
}
