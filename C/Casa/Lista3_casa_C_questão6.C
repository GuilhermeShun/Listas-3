#include <stdio.h>

int main(){
    int cont;
    for(cont=20; cont>=1; cont--){
        if(cont%2==0){printf("%i: par\n", cont);}
        else{printf("%i: ímpar\n", cont);}
    }
}