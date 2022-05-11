#include <iostream>
using namespace std;

// void print_matrix(int adjacency[6][6])
// {
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             cout << adjacency[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }
// int main()
// {
//     int adjacency_matrix[6][6] = {{0, 1, 4, 0, 0, 999},
//                                   {1, 0, 4, 2, 999, 0},
//                                   {4, 4, 0, 999, 5, 0},
//                                   {0, 2, 999, 0, 4, 6},
//                                   {0, 999, 5, 4, 0, 7},
//                                   {999, 0, 0, 6, 7, 0}};
//     print_matrix(adjacency_matrix);
//     int n = 6;
//     for (int k = 1; k <= n; k++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 adjacency_matrix[i][j] = min(adjacency_matrix[i][j], adjacency_matrix[i][k] + adjacency_matrix[k][j]);
//             }
//         }
//     }
//     print_matrix(adjacency_matrix);
//     return 0;
// }
int main()
{
    int parent[6] = {-1};
    int distance[6] = {INT_MAX};
    bool proccessed[6] = {false};
    for (int i = 0; i < 6; i++)
    {
        cout << parent[i] << " ";
    }
    return 0;
}