#include<stdlib.h>
int main() {
    
    int i = 0;
    //the while loop ,you set the stopping condition,so the loop will continue to run as long as the condition is true, once the condition becomes false the loop will stop running
    // This loop will print numbers from 0 to 9
    // used when you don't know exactly how many times you want to loop.
    while (i < 10) {
        printf("%d\n", i);
        i++;

    }
    //then we have the for loop, which is a more compact way to write loops, it has three parts: initialization, condition, and increment/decrement
    //used when you know exactly how many times you want to loop, in this case we are also printing numbers from 0 to 9
    for (int j = 0; j < 10; j++) {
        printf("%d\n", j);
    }
    //finally we have the do while loop, which is similar to the while loop, but it will always execute the code block at least once, even if the condition is false
    do {
        printf("%d\n", i);
        i++;
    } while (i < 10); 
    return 0;
}