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
// Function to perform an in-order traversal of the binary tree
void inOrderTraversal(Node* node) {
    if (node != NULL) {
        inOrderTraversal(node->left);
        printf("%d ", node->data);
        inOrderTraversal(node->right);
    }
}
// Function to free the memory allocated for the binary tree
void freeTree(Node* node) { 
    if (node != NULL) {
        freeTree(node->left);
        freeTree(node->right);
        free(node);
    }
}
// Main function to demonstrate the binary tree implementation
int main() {
    Tree tree;
    tree.root = NULL;

    // Insert nodes into the binary tree
    insertNode(&tree, 5);
    insertNode(&tree, 3);
    insertNode(&tree, 7);
    insertNode(&tree, 2);
    insertNode(&tree, 4);
    insertNode(&tree, 6);
    insertNode(&tree, 8);

    // Perform in-order traversal of the binary tree
    printf("In-order traversal: ");
    inOrderTraversal(tree.root);
    printf("\n");

    // Free the memory allocated for the binary tree
    freeTree(tree.root);

    return 0;
}