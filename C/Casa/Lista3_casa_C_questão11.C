#include <stdio.h>

int main(){
    int cont;
    float num;
    do{
        printf("Digite o número para a tabuada: ");
        scanf("%f", &num);
    }
    while(num!=(int)num);
    printf("Tabuada do %.0f:", num);
    for(cont=0; cont<=10; cont++){
        printf("\n%.0f x %i = %.0f", num, cont, num*cont);
    }
    return 0;
}