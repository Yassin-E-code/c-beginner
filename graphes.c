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