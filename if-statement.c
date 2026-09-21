#include <stdio.h>
// the if statement is like a puting a condtion to run a block of code, if the condition is true, the code inside the block will be executed
int main() {
    //number 1 stands for true, so the code inside the block will be executed
    // while 0 stands for false, so the code inside the block will not be executed
    // if u run the code the output will be "Hello, World! ,true" because the condition is true, while the second block of code will not be executed because the condition is false
    if (1) {
        printf("Hello, World! ,true\n");
    }
    if (0) {
        printf("Hello, World! ,false\n");
    }

    return 0;