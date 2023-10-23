#include "Graph.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void recursive_dfs(Graph g, int v, bool *visited) {
    if (visited[v]) return;
    visited[v] = true;

    printf("%d\n", v);

    for (int w = 0; w < GraphNumVertices(g); w++) {
        if (!GraphIsAdjacent(g, v, w)) continue;
        recursive_dfs(g, w, visited);
    }
}

bool has_cycle(Graph g) {
    bool *visited = calloc(GraphNumVertices(g), sizeof(bool));
    recursive_dfs(g, 0, visited);
    free(visited);
    return false;
}

int main() {
    Graph g = GraphRead();
    has_cycle(g);
    GraphFree(g);
}
