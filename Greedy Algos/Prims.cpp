#include <iostream>
using namespace std;

#define VERTICES 5

int min_key_index(int keys[], bool in_MST[])
{
    // initialising variables
    int min = INT_MAX;
    int min_index = 0;
    for (int i = 0; i < VERTICES; i++)
    {
        if (!in_MST[i] && keys[i] < min)
        {
            min = keys[i];
            min_index = i;
        }
    }
    return min_index;
}

void printMST(int parent[], int graph[VERTICES][VERTICES])
{
    cout << "Edge \tWeight\n";
    // ignoring the root node and print the rest
    for (int i = 1; i < VERTICES; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
}

void prims(int graph[VERTICES][VERTICES])
{
    // initialising the arrays
    int keys[VERTICES];    // to store the final weights
    bool in_MST[VERTICES]; // to keep track of nodes if in mst or not
    int parent[VERTICES];  // to keep track of parent as of each index in the array
    for (int i = 0; i < VERTICES; i++)
    {
        // initialising the arrays
        keys[i] = INT_MAX;
        in_MST[i] = false;
        parent[i] = -1;
    }
    // making sure the first node always gets picked up first
    keys[0] = 0;
    // making the first node the root of mst
    parent[0] = -1;
    // running the loop for all vertices or V-1 edges
    for (int i = 1; i < VERTICES; i++)// because we need (vertices - 1 edges)
    {
        int u = min_key_index(keys, in_MST);
        in_MST[u] = true;
        for (int v = 0; v < VERTICES; v++)
        {
            // checking 3 conditions:
            // if an adjacent node exists
            // if its already in the mst
            // if its weight is less than the value of key[v](weight in the previous iteration or the default weight)
            if (graph[u][v] && !in_MST[v] && graph[u][v] < keys[v])
            {
                keys[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }
    printMST(parent, graph);
}
// Driver code
int main()
{
    /* Let us create the following graph
        2 3
    (0)--(1)--(2)
    | / \ |
    6| 8/ \5 |7
    | / \ |
    (3)-------(4)
            9	 */
    int graph[VERTICES][VERTICES] = {{0, 2, 0, 6, 0},
                                     {2, 0, 3, 8, 5},
                                     {0, 3, 0, 0, 7},
                                     {6, 8, 0, 0, 9},
                                     {0, 5, 7, 9, 0}};

    // Print the solution
    prims(graph);

    return 0;
}