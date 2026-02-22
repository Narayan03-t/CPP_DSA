#include<iostream>
#include<vector>
using namespace std;

// Helper function to solve the maze
bool solverimaze(vector<vector<int>> &maze, int i, int j, vector<vector<int>>& path) {
    int n = maze.size();
    // base case 
    if(i < 0 || i >= n || j < 0 || j >= n || maze[i][j] == 0 || path[i][j] == 1) {
        return false;
    }

    // include into path 
    path[i][j] = 1;

    if(i == n-1 && j == n-1) {
        return true;
    }

    // Try all 4 directions
    if(solverimaze(maze, i-1, j, path)) {
        return true;
    } // up
    if(solverimaze(maze, i, j-1, path)) {
        return true;
    } // left
    if(solverimaze(maze, i+1, j, path)) {
        return true;
    } // down
    if(solverimaze(maze, i, j+1, path)) {
        return true;
    } // right

    path[i][j] = 0; // backtrack
    return false;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    int n = maze.size();
    vector<vector<int>> path(n, vector<int>(n, 0));

    if(solverimaze(maze, 0, 0, path)) {
        cout << "Path found:"<<endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No path found."<<endl;
    }

    return 0;
}