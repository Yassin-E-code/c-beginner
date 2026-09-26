#include <stdio.h>
//just define a variable to store the input number and use scanf to read it from the user
// we also use printf to display what's stored 
int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    //here used the & operator to pass the address of the variable num to scanf, allowing it to modify the value of num directly. This is necessary because scanf needs to know where to store the input value in memory.
    return 0;
}