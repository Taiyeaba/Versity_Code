#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int n;

int main()
{
    int m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    memset(adj, 0, sizeof(adj));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter end points of edge " << i + 1 << ": ";
        cin >> u >> v;

        adj[u][v] = adj[v][u] = 1;
    }

    int start;
    cout << "Enter starting vertex for BFS: ";
    cin >> start;

    cout << "BFS traversal starting from vertex " << start << ": ";

    memset(visited, false, sizeof(visited));


    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << " ";

        for (int i = 0; i < n; i++)
        {
            if (adj[cur][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    cout << endl;
    return 0;
}
