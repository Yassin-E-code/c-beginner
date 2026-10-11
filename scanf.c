#include <stdio.h>
//just define a variable to store the input number and use scanf to read it from the user
// we also use printf to display what's stored 
int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    //we can also use scanf to read multiple values at once, for example we can read two numbers and store them in two variables
    int num1, num2;
    // in this case we will use scanf to read two numbers and store them in num1 and num2       

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered: %d and %d\n", num1, num2);
    while (1) {
        // we can also use scanf to read a string from the user, for example we can read a name and store it in a variable
        char name[50];
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Hello, %s!\n", name);
    }
    return 0;
}