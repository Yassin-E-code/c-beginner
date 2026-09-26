// functions are a block of code that performs a specific task and can be reused throughout a program. In C, functions help to organize code, improve readability, and facilitate code maintenance. They can take input parameters, perform operations, and return values.
// they can be defined with a specific return type, name, and a list of parameters. Functions can be called from other parts of the program, allowing for modular programming and code reuse.
//and they are declared separatly from the main code function
int add(int x, int y){
    return x + y;
//this function have a return type (int) becuse it returns the sum of two ints wich would be an int as well    
}
void moo() {
    printf("this is a void function");
    //this function have no return it just prints a message ,so we dont need a variable when we call it in the main code.
}
#include<stdio.h>
int main (){
    //here we call the add function and pass two integers as arguments to get their sum
    int result = add(5, 3);
    printf("The sum is: %d\n", result);
    moo();
    return 0;
}