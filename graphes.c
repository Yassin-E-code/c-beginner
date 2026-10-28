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