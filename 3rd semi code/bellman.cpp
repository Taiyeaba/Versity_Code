#include <bits/stdc++.h>
using namespace std;
bool bellmanFord(int V, int E, int edge[][3], int src, int dist[])
{
    const int INF = INT_MAX;
    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
    }
    dist[src] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = edge[j][0];
            int v = edge[j][1];
            int wt = edge[j][2];
            if (dist[u] != INF && dist[u] + wt < dist[v])
            {
                dist[v] = dist[u] + wt;
            }
        }
    }
    for (int j = 0; j < E; j++)
    {
        int u = edge[j][0];
        int v = edge[j][1];
        int wt = edge[j][2];
        if (dist[u] != INF && dist[u] + wt < dist[v])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    int edge[E][3];

    cout << "Enter the edges as (u v weight):" << endl;
    for (int i = 0; i < E; i++)
    {
        cin >> edge[i][0] >> edge[i][1] >> edge[i][2];
    }

    int src;
    cout << "Enter the source vertex: ";
    cin >> src;

    int dist[V];

    if (!bellmanFord(V, E, edge, src, dist))
    {
        cout << "Negative weight cycle detected.\n";
    }
    else
    {
        cout << "Shortest distances from source vertex " << src << ":" << endl;
        for (int i = 0; i < V; i++)
        {
            if (dist[i] == INT_MAX)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
