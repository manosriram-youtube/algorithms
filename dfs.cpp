#include <iostream>
#include <vector>
using namespace std;
// Graph
vector<int> g[10];
// Array to mark nodes as visited/not-visited. Initially, all nodes are
// not-visited.
bool visited[10] = { false };

// Create an edge between src and dest.
void create_edge(int src, int dest) {
    g[src].push_back(dest);
}

// dfs driver function.
void dfs(int vertex) {
    // If the current vertex is already visited, just return.
    if (visited[vertex] == true) return;

    cout << vertex << " ";

    // Mark the vertex as visited.
    visited[vertex] = true;
    
    // For every child of the current vertex, recursively call dfs();
    for (auto node: g[vertex]) {
        // node -> a child of vertex;
        dfs(node);
    }
}

int main() {
    create_edge(0, 1);
    create_edge(1, 2);
    create_edge(2, 5);
    create_edge(5, 6);
    create_edge(6, 7);
    create_edge(6, 2);

    dfs(0);
}
