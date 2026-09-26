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
    // Modify the string
    str[7] = 'C';
    printf("Modified string: %s\n", str);
    //string comparisons can be done using the strcmp function from the string.h library. It compares two strings lexicographically and returns an integer value indicating their relationship. If the first string is less than the second, it returns a negative value; if they are equal, it returns zero; and if the first string is greater, it returns a positive value.
    char str1[] = "Hello";
    char str2[] = "World";
    int comparison = strcmp(str1, str2);
    printf("Comparison result: %d\n", comparison);
    return 0;
}