#include <iostream>
#include <vector>

using namespace std;

void addEdge(vector<vector<int>>& adjMatrix, int u, int v)
{
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}


void printAdjMatrix(const vector<vector<int>>& adjMatrix)
{
    for (int i = 0; i < adjMatrix.size(); ++i)
    {
        for (int j = 0; j < adjMatrix[i].size(); ++j)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;


    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));


    int E;
    cout << "Enter the number of edges: ";
    cin >> E;


    cout << "Enter edges (format: u v):" << endl;
    for (int i = 0; i < E; ++i)
    {
        int u, v;
        cin >> u >> v;
        addEdge(adjMatrix, u, v);
    }


    cout << "Adjacency Matrix:\n";
    printAdjMatrix(adjMatrix);

    return 0;
}

