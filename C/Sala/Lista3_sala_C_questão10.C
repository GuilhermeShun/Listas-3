#include <stdio.h>
int main(){
    int cont, soma;
    cont=1;
    soma=0;
    while(cont<=500){
        if(cont%2==0){soma=soma+cont;}
        ++cont;
    }
    printf("%i", soma);
    return 0;
} 