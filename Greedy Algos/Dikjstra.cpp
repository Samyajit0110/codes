#include <iostream>
using namespace std;

#define vertices 6
int min_vertex(bool proccessed[], int distance[])
{
    int min_value = INT_MAX;
    int vertex = 0;
    for (int i = 0; i < 6; i++)
    {
        if (proccessed[i] == false && distance[i] < min_value)
        {
            min_value = distance[i];
            vertex = i;
        }
    }
    return (vertex);
}

void dijkstra(int graph[6][6], int source)
{
    int parent[vertices];
    int distance[vertices];
    bool proccessed[vertices];

    for (int i = 0; i < vertices; i++)
    {
        parent[i] = -1;
        distance[i] = INT_MAX;
        proccessed[i] = false;
    }

    distance[source] = 0;
    for (int i = 0; i < vertices; i++)
    {
        int vertex = min_vertex(proccessed, distance);
        proccessed[vertex] = true;
        for (int j = 0; j < vertices; j++)
        {
            if (!proccessed[j] && graph[vertex][j] && distance[vertex] != INT_MAX && distance[vertex] + graph[vertex][j] < distance[j])
            {
                distance[j] = graph[vertex][j] + distance[vertex];
                parent[j] = vertex;
            }
        }
    }
    for (int i = 0; i < vertices; i++)
    {
        cout << i << " Distance from source " << distance[i] << endl;
    }
}
int main()
{
    int graph[6][6] = {
        {0, 1, 2, 0, 0, 0},
        {1, 0, 0, 5, 1, 0},
        {2, 0, 0, 2, 3, 0},
        {0, 5, 2, 0, 2, 2},
        {0, 1, 3, 2, 0, 1},
        {0, 0, 0, 2, 1, 0}};
    dijkstra(graph, 0);
    return 0;
}
