#include <iostream>
#include <vector>
using namespace std;
vector<int> g[10];
bool visited[10] = { false };

void create_edge(int src, int dest) {
    g[src].push_back(dest);
}

void dfs(int vertex) {
    if (visited[vertex] == true) return;

    cout << vertex << " ";
    visited[vertex] = true;
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
