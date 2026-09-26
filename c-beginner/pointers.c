#include<stdio.h>
#include<stdlib.h>
//a pointer is just a variable ,but instead of storing a value, it stores the address of another variable.
// it is used to indirectly access and manipulate the value of another variable by using its memory address. Pointers are powerful tools in C programming that allow for dynamic memory allocation, efficient array handling, and the creation of complex data structures like linked lists and trees.
int main (){
    char * name = "John";
    //here we are using a pointer to store the address of the string "John". The pointer variable 'name' holds the memory address where the string is stored. This allows us to access and manipulate the string indirectly through the pointer.
    /* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
int * pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);

    return 0;
}
