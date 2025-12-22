#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5
struct Vertex {
    char label;
    bool visited;
};

struct Vertex* vertices[MAX];
int adjMatrix[MAX][MAX];
int vertexCount = 0;

int queue[MAX];
int front = 0, rear = 0;

void addVertex(char label) {
    struct Vertex* v = (struct Vertex*)malloc(sizeof(struct Vertex));
    v->label = label;
    v->visited = false;
    vertices[vertexCount++] = v;
}

void addEdge(int start, int end) {
    adjMatrix[start][end] = 1;
    adjMatrix[end][start] = 1;
}

void enqueue(int v) { queue[rear++] = v; }

int dequeue() { return queue[front++]; }

bool isEmpty() { return front == rear; }

int getUnvisitedNeighbor(int v) {
    for (int i = 0; i < vertexCount; i++) {
        if (adjMatrix[v][i] == 1 && !vertices[i]->visited)
            return i;
    }
    return -1;
}

void BFS() {
    vertices[0]->visited = true;
    printf("%c ", vertices[0]->label);
    enqueue(0);

    while (!isEmpty()) {
        int v = dequeue();
        int neighbor;
        while ((neighbor = getUnvisitedNeighbor(v)) != -1) {
            vertices[neighbor]->visited = true;
            printf("%c ", vertices[neighbor]->label);
            enqueue(neighbor);
        }
    }

    for (int i = 0; i < vertexCount; i++)
        vertices[i]->visited = false;
}

int main() {
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            adjMatrix[i][j] = 0;

    addVertex('S');
    addVertex('A');
    addVertex('B');
    addVertex('C');
    addVertex('D');

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(1, 4);
    addEdge(2, 4);
    addEdge(3, 4);

    printf("Breadth First Search: ");
    BFS();
    printf("\n");

    return 0;
}
