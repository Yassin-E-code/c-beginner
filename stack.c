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
// function to push an element onto the stack
void push(stack* s, int value){
    node* newnode = create_node(value);
    newnode->next = s->top ;
    s->top = newnode ;
}
// function to pop an element from the stack
int pop(stack* s){
    if (is_empty(s)){
        printf("Stack is empty\n");
        return -1 ;
    }
    node* temp = s->top ;
    int value = temp->data ;
    s->top = s->top->next ;
    free(temp);
    return value ;
}
// function to peek at the top element of the stack
int peek(stack* s){
    if (is_empty(s)){
        printf("Stack is empty\n");
        return -1 ;
    }
    return s->top->data ;
}
// function to free the stack
void free_stack(stack* s){  
    while (!is_empty(s)){
        pop(s);
    }
    free(s);
}


