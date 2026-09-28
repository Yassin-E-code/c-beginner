#include <stdio.h>
//By default, variables are local to the scope in which they are defined. Static variables have a property of preserving their value even after they are out of their scope! Hence, static variables preserve their previous value in their previous scope and are not initialized again in the new scope.
//static variables are variables that retain their value between function calls and have a lifetime that lasts for the duration of the program. They are declared using the static keyword and are typically used to maintain state information or to limit the scope of a variable to a specific function or file. Static variables can be initialized only once, and their value persists across multiple invocations of the function in which they are declared. This makes them useful for scenarios where you want to preserve data between function calls without exposing it to other parts of the program.
int main() {
    // Declare a static variable
    static int count = 0;

    // Increment the static variable
    count++;

    // Print the value of the static variable
    printf("Count: %d\n", count);

    return 0;
}