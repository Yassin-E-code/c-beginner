#include <stdio.h>
#include <stdlib.h>

/*
 CONCEPT 1: WHAT IS A POINTER?
 A pointer is simply a variable that holds a memory address instead of a standard value.
 
   - `&` (Address-of operator): Finds where a variable lives in memory.
   - `*` (Dereference operator): Goes to that memory address and reads/writes its value.
*/

int main() {

    // ---------------------------------------------------------------
    // INSTRUCTION 1: Storing an address in a pointer
    // ---------------------------------------------------------------
    int x = 10;           // Standard variable holding the value 10
    int *ptr = &x;        // 'ptr' stores the memory address of 'x'

    // Printing 'x' directly vs. reading 'x' indirectly using 'ptr'
    printf("Value of x directly: %d\n", x);
    printf("Value of x via pointer (*ptr): %d\n", *ptr);


    // ---------------------------------------------------------------
    // INSTRUCTION 2: Modifying values indirectly
    // ---------------------------------------------------------------
    // Changing *ptr modifies the value inside 'x' directly at its memory address.
    *ptr = 25; 

    printf("New value of x after updating *ptr: %d\n", x);


    // ---------------------------------------------------------------
    // INSTRUCTION 3: String literals as char pointers
    // ---------------------------------------------------------------
    // "Hello" is stored somewhere in memory; 'msg' holds the address of 'H'.
    char *msg = "Hello"; 

    printf("String printed via pointer: %s\n", msg);
    printf("First character pointed to: %c\n", *msg); // Dereferencing gives 'H'


    // ---------------------------------------------------------------
    // INSTRUCTION 4: Pass-by-reference using pointers
    // ---------------------------------------------------------------
    // Pointers allow functions to modify variables created outside their scope.
    int score = 50;
    
    int *score_ptr = &score;
    *score_ptr = *score_ptr + 10; // Adds 10 directly to 'score'

    printf("Updated score: %d\n", score);

    return 0;
}