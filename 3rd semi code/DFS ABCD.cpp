#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int n;
map<char, int> vertexMap; // Map to store character vertices and their corresponding integer values

void DFS(int start)
{
    stack<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int cur = q.top();
        q.pop();
        cout << char(cur + 'A') << " "; // Outputting the character value of the vertex

        for (int i = 0; i < n; i++)
        {
            if (adj[cur][i] == 1 && !visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main ()
{
    int m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    char u, v;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter end points of edge " << i + 1 << ": ";
        cin >> u >> v;

        if (vertexMap.find(u) == vertexMap.end()) // If vertex 'u' is not mapped yet
        {
            vertexMap[u] = vertexMap.size(); // Assign the next available integer value
        }

        if (vertexMap.find(v) == vertexMap.end()) // If vertex 'v' is not mapped yet
        {
            vertexMap[v] = vertexMap.size(); // Assign the next available integer value
        }

        adj[vertexMap[u]][vertexMap[v]] = 1;
    }

    char startVertex;
    cout << "Enter starting vertex for DFS: ";
    cin >> startVertex;

    cout << "DFS traversal starting from vertex: " << startVertex << ": ";
    DFS(vertexMap[startVertex]);
    cout << endl;
    return 0;
}

