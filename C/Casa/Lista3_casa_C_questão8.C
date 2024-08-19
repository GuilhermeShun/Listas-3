#include <stdio.h>

int main(){
    int cont;
    cont=1;
    do{
        if(cont%2==0){printf("%i\n", cont);}
        cont++;
    }
    while(cont<=20);
}