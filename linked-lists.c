#include <stdio.h>
#include <stdlib.h>
// lets define our node structure
typedef struct {
    int data ;
    struct node* next ;
}node;
typedef struct {
    node* head ;
}list ;
node* createNode(int value) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
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

