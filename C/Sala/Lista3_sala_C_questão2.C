//Lista 3 sala, questão 2 (em C)
#include <stdio.h>

int main(){
    int cont, soma;
    soma=0;
    for(cont=1; cont<=100; cont++){
        soma=cont+soma;
    }
    printf("Soma dos números inteiros de 1 a 100: %i", soma);
    return 0;
}