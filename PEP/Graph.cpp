#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m; // vertices and edges
    cin >> n >> m;

    vector<vector<int>> adjMatrix(n+1, vector<int>(n+1, 0));

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // remove this line if directed
    }

    // Print adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

