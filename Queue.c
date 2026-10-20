#include <stdio.h>
#include <stdlib.h>
// Define the structure for a node in the queue
// the principe fifo first in first out
typedef struct {
    int data;
    struct Node* next;
} Node;
// Define the structure for the queue
typedef struct {
    Node* front;
    Node* rear;
} Queue;
// Function to create a new node with the given value
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// Function to initialize a new queue
Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}
// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return (queue->front == NULL);
}
