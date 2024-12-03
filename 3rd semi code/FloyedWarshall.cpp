
#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
int path[100][100];

void printPath(int s, int d)
{
    if(s == d) cout << d << " ";
    else if(path[s][d] == -1) cout << "No path found" << endl;
    else
    {
        printPath(s, path[s][d]);
        cout << d << " ";
    }
}

int main()
{
    int n, e, u, v, w, i, s;
    cout << "Vertex: "; cin >> n;
    cout << "Edge number: "; cin >> e;

    int dist[n][n];
    // Initialize dist and path matrices
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                dist[i][j] = 0;
                path[i][j] = i;
            }
            else
            {
                dist[i][j] = INF;
                path[i][j] = -1;
            }
        }
    }

    cout << "S D W " << endl;
    for(int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        dist[u][v] = w;
        path[u][v] = u;  // Direct edge from u to v
    }

    // Floyd-Warshall Algorithm to find shortest paths
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(dist[i][k] != INF && dist[k][j] != INF && dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j] = path[k][j];
                }
            }
        }
    }

    // Asking for source and destination
    int src, dest;
    cout << "Source dest: "; cin >> src >> dest;

    cout << "Shortest path: ";
    printPath(src, dest);
    cout << "\nCost: " << dist[src][dest] << endl;

    return 0;
}
/*
Vertex: 5
Edge number: 10
S D W
0 1 4
1 4 6
4 3 4
3 4 2
4 0 1
3 2 1
2 3 3
2 0 2
1 2 1
0 3 5
Source dest: 2 4
Shortest path: 2 3 4
Cost: 5
*/