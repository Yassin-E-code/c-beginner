#include <stdio.h>
// union and enum in c are
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
     enum day x = friday;
     printf("day number is  %d\n",x);
     printf("day name is  %d\n",x);
    
    return 0;
}