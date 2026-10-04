#include <stdio.h>

enum day {
        sunday,
        monday,
        tuesday,
        wednsday,
        thirsday,
        friday,
        saturday
    };


    
    
int main (){
    // lets test it 
    enum day y =sunday;
    printf("day number is  %d\n",y);
     enum day x = friday;
     printf("day number is  %d\n",x);
    
    
    return 0;
}