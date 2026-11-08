#include <stdio.h>
#include <stdlib.h>
// Define a structure for a graph node
typedef struct   {
    int data;
    struct Node* next;
} Node;
// Define a graph structure that contains an array of pointers to the nodes
typedef struct  {
    Node** nodes;
    int numNodes;
} Graph;
// node **  reference to an array of pointers to nodes, which represents the adjacency list of the graph. Each element of the array corresponds to a node in the graph, and the linked list of nodes represents the edges connected to that node.
// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to create a new graph with the given number of nodes
Graph* createGraph(int numNodes) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numNodes = numNodes;
    graph->nodes = (Node**)malloc(numNodes * sizeof(Node*));
    for (int i = 0; i < numNodes; i++) {
        graph->nodes[i] = NULL;
    }
    return graph;
}
// Function to add an edge between two nodes in the graph
void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = createNode(dest);
    newNode->next = graph->nodes[src];
    graph->nodes[src] = newNode;
}
// Function to print the graph
void printGraph(Graph* graph) {
    for (int i = 0; i < graph->numNodes; i++) {
        Node* temp = graph->nodes[i];
        printf("Node %d: ", i);
        while (temp) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
// Function to free the memory allocated for the graph
void freeGraph(Graph* graph) {      
    for (int i = 0; i < graph->numNodes; i++) {
        Node* temp = graph->nodes[i];
        while (temp) {
            Node* toFree = temp;
            temp = temp->next;
            free(toFree);
        }
    }
    free(graph->nodes);
    free(graph);
}
//function to check if a node exists in the graph
int nodeExists(Graph* graph, int node) {
    if (node < 0 || node >= graph->numNodes) {
        return 0; // Node index is out of bounds
    }
    return 1; // Node exists
}
// Function to check if an edge exists between two nodes in the graph
int edgeExists(Graph* graph, int src, int dest) {
    if (!nodeExists(graph, src) || !nodeExists(graph, dest)) {
        return 0; // One or both nodes do not exist
    }
    Node* temp = graph->nodes[src];
    while (temp) {
        if (temp->data == dest) {
            return 1; // Edge exists
        }
        temp = temp->next;
    }
    return 0; // Edge does not exist
}
// Function to remove an edge between two nodes in the graph
void removeEdge(Graph* graph, int src, int dest) {
    if (!nodeExists(graph, src) || !nodeExists(graph, dest)) {
        return; // One or both nodes do not exist
    }
    Node* temp = graph->nodes[src];
    Node* prev = NULL;
    while (temp) {
        if (temp->data == dest) {
            if (prev) {
                prev->next = temp->next;
            } else {
                graph->nodes[src] = temp->next;
            }
            free(temp);
            return; // Edge removed
        }
        prev = temp;
        temp = temp->next;
    }
}
//function to remove a node from the graph
void removeNode(Graph* graph, int node) {   
    if (!nodeExists(graph, node)) {
        return; // Node does not exist
    }
    // Remove all edges to this node
    for (int i = 0; i < graph->numNodes; i++) {
        removeEdge(graph, i, node);
    }
    // Free the linked list of edges for this node
    Node* temp = graph->nodes[node];
    while (temp) {
        Node* toFree = temp;
        temp = temp->next;
        free(toFree);
    }
    graph->nodes[node] = NULL; // Set the node's adjacency list to NULL
}
// function to get the degree of a node in the graph
int getDegree(Graph* graph, int node) {
    if (!nodeExists(graph, node)) {
        return -1; // Node does not exist
    }
    int degree = 0;
    Node* temp = graph->nodes[node];
    while (temp) {
        degree++;
        temp = temp->next;
    }
    return degree;
}
// Function to get the neighbors of a node in the graph
int* getNeighbors(Graph* graph, int node, int* numNeighbors) {
    if (!nodeExists(graph, node)) {
        *numNeighbors = 0; // Node does not exist
        return NULL;
    }
    int degree = getDegree(graph, node);
    *numNeighbors = degree;
    int* neighbors = (int*)malloc(degree * sizeof(int));
    Node* temp = graph->nodes[node];
    for (int i = 0; i < degree; i++) {
        neighbors[i] = temp->data;
        temp = temp->next;
    }
    return neighbors;
}
