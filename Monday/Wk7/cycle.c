#include "Graph.h"
#include <stdbool.h>
#include <stdlib.h>

bool dfs_cycle(Graph g, int v, int pred, bool *visited) {
    if (visited[v]) return true;

    visited[v] = true;

    for (int w = 0; w < GraphNumVertices(g); w++) {
        if (w == v || !GraphIsAdjacent(g, v, w) || w == pred) continue;

        if (visited[w]) return true;

        dfs_cycle(g, w, v, visited);
    }

    return false;
}

bool has_cycle(Graph g) {
    bool *visited = calloc(GraphNumVertices(g), sizeof(bool));
    bool res = dfs_cycle(g, 0, -1, visited);
    free(visited);
    return res;
}

int main() {
    Graph g = GraphRead();
    printf(has_cycle(g) ? "Yes\n" : "No\n");
    GraphFree(g);
}
