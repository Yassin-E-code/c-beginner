#include <stdio.h>
// first we have the looping methode wich is easy to think about , but with n complexity wich is also a bad thing to our programme so we use recursion as a solution 
// the main idea is to fined the base case and the repetive one so u can build a code that runs faster , consumes less memorey and easy to read and understand .
int factorial(int a ){
    if (a == 0 || a == 1) {
        return 1;
    int fact =1;    
    while (a!=0 && a!=1) {
        fact*=a;
        a-=1;
    }
    return fact;   
}}
// then we have this version of the same function which does the same task which is the factoriel calculation 

int factorial_rcursive (int a) {
    //the base case is when a is 0 or 1, in which case the function returns 1. This is because the factorial of 0 and 1 is defined to be 1.
    if (a == 0 || a == 1) {
        return 1;
        
    } else {
        return a * factoriel(a - 1);
       // the recursive case is when a is greater than 1. In this case, the function calls itself with the argument a - 1 and multiplies the result by a. This continues until the base case is reached, at which point the recursion unwinds and the final result is returned.
    }
}

int main() {
    int num;
    printf("enter a number to calculate its factorial :");
    scanf("%d",num);
    int result =factorial(num);
    int result2=factorial_rcursive(num);
    printf("the factoriel of %d is : %d\n",num,result2);
    printf("the factoriel of %d is : %d\n",num,result);
    //testing to see if the two functions give the same result.

    return 0;
}