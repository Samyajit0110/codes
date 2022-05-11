// // pseudo code
// // function bellmanFord(G, S)
// //   for each vertex N in G
// //     distance[N] <- infinite
// //       previous[N] <- NULL
// //   distance[S] <- 0
// //   for each vertex N in G
// //     for each edge (M,N) in G
// //       tempDistance <- distance[M] + edge_weight(M, N)
// //       if tempDistance < distance[N]
// //         distance[N] <- tempDistance
// //         previous[N] <- M
// //   for each edge (M,N) in G
// //     If distance[M] + edge_weight(M, N) < distance[N}
// //       Error: Negative Cycle Exists
// //   return distance[], previous[]

#include <iostream>
using namespace std;

struct Edge
{
    int source, destination, weight;
};

struct Graph
{
    int E, V;
    struct Edge *edge;
};

struct Graph *create_graph(int V, int E)
{
    struct Graph *graph = new Graph();
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[E];
    return graph;
}

void print_Array(int array[], int size)
{
    cout << "Distance from the source" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << "\t\t" << array[i] << endl;
    }
}

void bellman_ford(struct Graph *graph, int source)
{
    int V = graph->V;
    int E = graph->E;
    int distance[5]; // V cannot be used due to c++'s intolerance towards modifiable values in array declarations

    for (int i = 0; i < V; i++)
    {
        distance[i] = INT_MAX;
    }
    distance[source] = 0;
    for (int i = 0; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int initial = graph->edge[j].source;
            int final = graph->edge[j].destination;
            int weight = graph->edge[j].weight;
            if (distance[initial] != INT_MAX && distance[initial] + weight < distance[final])
            {
                distance[final] = distance[initial] + weight;
            }
        }
    }
    print_Array(distance, V);
}

int main()
{
    struct Graph *graph = create_graph(5, 8);
    graph->edge[0].source = 0;
    graph->edge[0].destination = 1;
    graph->edge[0].weight = -1;
    graph->edge[1].source = 0;
    graph->edge[1].destination = 2;
    graph->edge[1].weight = 4;
    graph->edge[2].source = 1;
    graph->edge[2].destination = 2;
    graph->edge[2].weight = 3;
    graph->edge[3].source = 1;
    graph->edge[3].destination = 3;
    graph->edge[3].weight = 2;
    graph->edge[4].source = 1;
    graph->edge[4].destination = 4;
    graph->edge[4].weight = 2;
    graph->edge[5].source = 3;
    graph->edge[5].destination = 2;
    graph->edge[5].weight = 5;
    graph->edge[6].source = 3;
    graph->edge[6].destination = 1;
    graph->edge[6].weight = 1;
    graph->edge[7].source = 4;
    graph->edge[7].destination = 3;
    graph->edge[7].weight = -3;
    bellman_ford(graph, 0);
    return 0;
}