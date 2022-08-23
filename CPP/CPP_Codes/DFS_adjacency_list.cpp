#include <iostream>
#include <map>
#include <list>
using namespace std;

struct Graph
{
    map<int, bool> visited;
    map<int, list<int>> adjacency_list;
};

void add_edge(struct Graph *graph, int u, int v)
{
    graph->adjacency_list[u].push_back(v);
}

void dfs(struct Graph *graph, int vertex)
{
    graph->visited[vertex] = true;
    cout << vertex << " ";
    list<int>::iterator i;
    for (i = graph->adjacency_list[vertex].begin(); i != graph->adjacency_list[vertex].end(); i++)
    {
        if (graph->visited[(*i)] == false)
        {
            dfs(graph, *i);
        }
    }
}
int main()
{
    struct Graph *graph = new Graph;
    add_edge(graph, 0, 1);
    add_edge(graph, 0, 2);
    add_edge(graph, 1, 2);
    add_edge(graph, 2, 0);
    add_edge(graph, 2, 3);
    add_edge(graph, 3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex, 0) \n";
    dfs(graph, 0);

    return 0;
}
