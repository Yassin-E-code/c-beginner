#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int data ;
    struct node* next ;
}node;
typedef struct {
    node* top ;
}stack;
// function to create a new node
node* create_node (int value){
    node* newnode= malloc(sizeof(node));
    newnode->next =NULL;
    newnode->data =value ;

return newnode ;
}
// function to create a new stack
stack* create_stack(){
    stack* newstack = malloc(sizeof(stack));
    newstack->top = NULL ;
    return newstack ;
}
// function to check if the stack is empty
int is_empty(stack* s){
    return s->top == NULL ;
}


