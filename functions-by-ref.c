#include <stdio.h>
// a void function to swap to variables using pointers. This function takes two integer pointers as parameters and swaps the values they point to. The use of pointers allows the function to modify the original variables in the calling function, demonstrating the concept of passing by reference in C.

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}