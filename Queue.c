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
// Function to add an element to the rear of the queue
void enqueue(Queue* queue, int value) {
    Node* newNode = createNode(value);
    if (isEmpty(queue)) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}
// Function to remove and return the front element of the queue
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Return an error value
    }
    Node* temp = queue->front;
    int value = temp->data;
    queue->front = queue->front->next;
    free(temp);
    if (queue->front == NULL) {
        queue->rear = NULL; // If the queue is now empty, set rear to NULL
    }
    return value;
}