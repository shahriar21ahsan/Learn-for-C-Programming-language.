#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Graph representation using Adjacency Matrix
struct Graph {
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
};

// Function to create a graph with N vertices
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    // Initialize the matrix with 0
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
    return graph;
}

// Function to add an edge (Undirected Graph)
void addEdge(struct Graph* graph, int src, int dest) {
    // Edge from src to dest
    graph->adjMatrix[src][dest] = 1;
    // Edge from dest to src (Since it's undirected)
    graph->adjMatrix[dest][src] = 1;
}

// Function to print the Adjacency Matrix
void printGraph(struct Graph* graph) {
    printf("\n--- Adjacency Matrix Representation ---\n");
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

// BFS (Breadth First Search) Traversal
void bfs(struct Graph* graph, int startVertex) {
    int visited[MAX_VERTICES] = {0}; // Visited array initialized to 0
    int queue[MAX_VERTICES];         // Queue array for BFS
    int front = 0, rear = 0;

    // Start with the initial vertex
    visited[startVertex] = 1;
    queue[rear++] = startVertex;

    printf("\n--- BFS Traversal (Starting from vertex %d) ---\n", startVertex);

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        // Check all adjacent vertices of the current vertex
        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->adjMatrix[currentVertex][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1; // Mark as visited
            }
        }
    }
    printf("\n");
}

int main() {
    // 5 vertices er ekta graph dynamic bhabe build kora hocche (0 theke 4 porjonto)
    struct Graph* graph = createGraph(5);

    // Edges connection setup
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);

    // Graph matrix and BFS output declaration
    printGraph(graph);
    bfs(graph, 0);

    // Memory free kora
    free(graph);

    return 0;
}