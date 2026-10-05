#include <stdio.h>
int main (){
//we want the programe to checks if  you're old enough to work
//we create a variable called age, and we check if the age is valid or not .age must be < 65 and >=18
    int age = 30;
    if (age >= 18 && age < 65) {
        printf("You are eligible to work.\n");
    } else {
        printf("You are not eligible to work.\n");
    }
    int number = 10;
//we want to check if the number is positive and even
if (number>0 && number%2==0) {
    printf("The number is positive and even.\n");
} else {
    printf("The number is either negative or odd.\n");
}



// ...
return 0;
}