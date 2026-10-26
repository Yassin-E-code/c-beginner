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
// Function to insert a new node with the given data into the binary tree
void insertNode(Tree* tree, int data) { 
    Node* newNode = createNode(data);
    if (tree->root == NULL) {
        tree->root = newNode;
    } else {
        Node* current = tree->root;
        Node* parent = NULL;
        while (current != NULL) {
            parent = current;
            if (data < current->data) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        if (data < parent->data) {
            parent->left = newNode;
        } else {
            parent->right = newNode;
        }
    }
}