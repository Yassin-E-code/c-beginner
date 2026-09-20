#include <stdio.h>
//just define a variable to store the input number and use scanf to read it from the user
// we also use printf to display what's stored 
int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}