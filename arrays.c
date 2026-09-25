#include <stdio.h>
int main(){
    // declaring an array of integers with a size of 10
    int numbers[10];

//filling the array with values
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;

//how to access the elements of the array, we can use the index of the element we want to access, for example to access the first element we use numbers[0], to access the second element we use numbers[1] and so on
printf("The 7th number in the array is %d", numbers[6]);
    return 0;
}