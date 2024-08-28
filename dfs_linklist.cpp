#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int vertex;
    Node* next;
};

Node* createNode(int v) {
    Node* newNode = new Node();
    newNode->vertex = v;
    newNode->next = nullptr;
    return newNode;
}

struct Graph {
    int numVertices;
    vector<bool> visited;
    vector<Node*> adjLists;

    Graph(int vertices) {
        numVertices = vertices;
        adjLists.resize(vertices, nullptr);
        visited.resize(vertices, false);
    }
};

//dfs making this code

void DFS(Graph* graph, int vertex) {
    Node* adjList = graph->adjLists[vertex];
    Node* temp = adjList;

    graph->visited[vertex] = true;
    cout << "Visited " << vertex << endl;

    while (temp != nullptr) {
        int connectedVertex = temp->vertex;

        if (!graph->visited[connectedVertex]) {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

// Adding edge create this graph

void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

//print section in this code

void printGraph(Graph* graph) {
    for (int v = 0; v < graph->numVertices; ++v) {
        Node* temp = graph->adjLists[v];
        cout << "\n Adjacency list of vertex " << v << "\n ";
        while (temp) {
            cout << temp->vertex << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    Graph* graph = new Graph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    printGraph(graph);

    DFS(graph, 2);

    return 0;
}
