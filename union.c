#include <stdio.h>

//union is a user defined data type which allows to store different data types in the same memory location.
typedef union {
    //here we are defining a union named Data which can hold an integer, a float, or a string of 20 characters.
    int i;
    float f;
    char str[20];
} Data;
int main() {
    //here we are creating a variable of type Data named data.
    Data data;        
//here we are assigning a value to the integer member of the union and printing it.
    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %.2f\n", data.f);

    // Note: The value of data.i is now overwritten by data.f
    printf("data.i after assigning data.f : %d\n", data.i);

    return 0;
}