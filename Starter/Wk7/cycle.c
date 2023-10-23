#include "Graph.h"
#include <stdbool.h>
#include <stdlib.h>

bool has_cycle(Graph g) {
    return false;
}

int main() {
    Graph g = GraphRead();
    printf(has_cycle(g) ? "Yes\n" : "No\n");
    GraphFree(g);
}
