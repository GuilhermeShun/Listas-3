#include <stdio.h>
int main(){
    int a, b, cont;
    a=1;
    b=1;
    printf("%i\n%i\n", a, b);
    for(cont=3; cont<=15; ++cont){
        a=a+b;
        printf("%i\n", a);
        b=a-b;}  
    return 0;
}