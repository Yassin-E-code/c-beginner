#include <stdio.h>
int main() {
    // Declare a 2D array (3 rows and 4 columns)
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the elements of the 2D array,we use nested loops to iterate through the rows and columns of the array 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
        // print a new line after each row to format the output nicely
    }
    // In C, multidimensional arrays are essentially arrays of arrays. The first index represents the row, and the second index represents the column. This allows for the storage and manipulation of data in a tabular format, making it useful for various applications such as matrices, grids, and more complex data structures.

    return 0;
}