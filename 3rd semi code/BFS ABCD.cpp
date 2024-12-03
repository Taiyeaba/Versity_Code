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
        char u, v;
        cout << "Enter end points of edge " << i + 1 << ": ";
        cin >> u >> v;


        int u_index = u - 'a';
        int v_index = v - 'a';

        adj[u_index][v_index] = adj[v_index][u_index] = 1;
    }

    char start;
    cout << "Enter starting vertex for BFS: ";
    cin >> start;


    int start_index = start - 'a';

    cout << "BFS traversal starting from vertex " << start << ": ";

    memset(visited, false, sizeof(visited));

    queue<int> q;
    q.push(start_index);
    visited[start_index] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        char cur_vertex = cur + 'a';
        cout << cur_vertex << " ";

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
