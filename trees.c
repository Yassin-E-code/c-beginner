#include <stdio.h>
#include <stdlib.h>
// Define a structure for a binary tree node
typedef struct  {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
// define a tree structure that contains a pointer to the root node of the tree
typedef struct  {
    Node* root;
} Tree ;
// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}