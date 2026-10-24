#include <unistd.h>
void write_fun (char c){
    write(1, &c, 10);
}
int main(){
    char c ;
    scanf("%c", c);
    write_fun(&c);
    return 0;
}