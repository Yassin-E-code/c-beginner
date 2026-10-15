#include <stdio.h>
#include <stdlib.h>
// lets define our node structure
// A node structure that contains an integer data and a pointer to the next node
typedef struct {
    int data ;
    struct node* next ;
}node;
// A list structure that contains a pointer to the head node
typedef struct {
    node* head ;
}list ;
// Function to create a new node with the given value
node* createNode(int value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
// Function to create a new list
list* createList() {
    list* newList = (list*)malloc(sizeof(list));
    newList->head = NULL;
    return newList;
}
list* addNode(list* myList, int value) {
    node* newNode = createNode(value);
    if (myList->head == NULL) {
        myList->head = newNode;
    } else {
        node* current = myList->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    return myList;
}
int main() {
    list* myList = createList();
    myList = addNode(myList, 10);
    myList = addNode(myList, 20);
    myList = addNode(myList, 30);
    
    node* current = myList->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    
    // Free the allocated memory
    current = myList->head;
    while (current != NULL) {
        node* temp = current;
        current = current->next;
        free(temp);
    }
    free(myList);
    
    return 0;
}

