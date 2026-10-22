#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int data ;
    struct node* next ;
}node;
typedef struct {
    node* top ;
}stack;
node* create_node (int value){
    node* newnode= malloc(sizeof(node));
    newnode->next =NULL;
    newnode->data =value ;

return newnode ;
}


