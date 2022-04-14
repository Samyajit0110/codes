#include <iostream>
using namespace std;

#define LENGTH 2
int main()
{
    int rows = 2, columns = 6;
    int interval_array[6][2] = {{1, 2}, {2, 3}, {4, 8}, {5, 6}, {6, 7}, {8, 10}};
    int non_overlapping[6][2];
    int i, starting_index;
    int row_count = 0;
    for (i = 0; i < 6;)
    {
        starting_index = i;
        if (interval_array[i][1] <= interval_array[i + 1][0])
        {
            i++;
        }
        else
        {
            non_overlapping[row_count][0] = interval_array[starting_index][0];
            non_overlapping[row_count][1] = interval_array[i - 1][1];
            row_count++;
        }
    }
    for (i = 0; i < row_count; i++)
    {
        cout << "{";
        for (int j = 0; j < 2; j++)
        {
            cout << non_overlapping[i][j] << " , ";
        }
        cout << "}  ";
    }
    return 0;
}