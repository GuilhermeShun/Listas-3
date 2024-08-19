//Lista 3 sala, questão 3 (em C)
#include <stdio.h>

int main(){
    int cont;
    float num;
    do{
        printf("Número para tabuada: ");
        scanf("%f", &num);
    }
    while(num!=(int)num);
    
    for(cont=1; cont<=10; cont++){
        printf("\n%.0f x %i = %.0f", num, cont, num*cont);    
    }
    return 0;
}