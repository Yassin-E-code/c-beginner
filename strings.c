#include<stdio.h>
//strings are arrays of characters in C, and they are used to store and manipulate text data. In C, strings are represented as arrays of characters terminated by a null character ('\0'). The null character indicates the end of the string, allowing functions to determine where the string ends.
int main() {
    // Declare and initialize a string
    char str[] = "Hello, World!";
    
    // Print the string
    printf("%s\n", str);
    
    // Calculate the length of the string (excluding the null terminator)
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    // Print the length of the string
    printf("Length of the string: %d\n", length);
    
    return 0;
}