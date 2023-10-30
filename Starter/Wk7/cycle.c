#include "Graph.h"
#include <stdbool.h>
#include <stdlib.h>

bool has_cycle_dfs(Graph g, int v, int prev, bool *visited) {
    if (visited[v]) return true;
    visited[v] = true;

    for (int w = 0; w < GraphNumVertices(g); w++) {
        if (w == v || w == prev || !GraphIsAdjacent(g, v, w)) {
            continue;
        }

        if (has_cycle_dfs(g, w, v, visited)) return true;
    }
    return false;
}

bool has_cycle(Graph g) {
    bool *visited = calloc(GraphNumVertices(g), sizeof(bool));
    bool res = has_cycle_dfs(g, 0, -1, visited);
    free(visited);
    return res;
}

int main() {
    Graph g = GraphRead();
    printf(has_cycle(g) ? "Yes\n" : "No\n");
    GraphFree(g);
}
