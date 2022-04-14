#include <iostream>
using namespace std;
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};

void DFS(int node)
{
    static int visited[7] = {0};
    visited[node] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[node][j] == 1 && !visited[j])
        {
            DFS(j);
        }
    }
    cout << node << " ";
}
int main()
{
    DFS(0);
    return 0;
}
