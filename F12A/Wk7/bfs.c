
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "Graph.h"
#include "Queue.h"

void breadthFirstSearch(Graph g, int src, int dest) {
	Queue q = QueueNew();

    int nV = GraphNumVertices(g);

    bool *visited = calloc(nV, sizeof(bool));
    int *pred = calloc(nV, sizeof(int));
    for (int i = 0; i < nV; i++) pred[i] = -1;

    QueueEnqueue(q, src);
    visited[src] = true;

    while (!QueueIsEmpty(q)) {
        int v = QueueDequeue(q);

        if (v == dest) break;

        for (int w = 0; w < nV; w++) {
            if (GraphIsAdjacent(g, v, w) && !visited[w]) {
                QueueEnqueue(q, w);
                visited[w] = true;
                pred[w] = v;
            }
        }
    }

    for (int curr = dest; curr != -1; curr = pred[curr]) {
        printf("%d\n", curr);
    }

    QueueFree(q);
    free(pred);
    free(visited);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./bfs <src> <dest>\n");
        exit(1);
    }

	Edge edges[12] = {
		{0, 1},
		{0, 2},
		{0, 5},
		{0, 6},
		{0, 7},
		{1, 7},
		{3, 4},
		{3, 5},
		{4, 5},
		{4, 6},
		{4, 7},
		{6, 7},
	};
	Graph g = GraphNewFromEdgeArray(8, 12, edges);
	breadthFirstSearch(g, atoi(argv[1]), atoi(argv[2]));
    GraphFree(g);
}

