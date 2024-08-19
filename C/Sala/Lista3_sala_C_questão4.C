//Lista 3 sala, questão 4 (em C)
#include <stdio.h>

int main(){
    int cont;
    float num;
    printf("Insira um número positivo menor ou igual a 50: ");
    scanf("%f", &num);
    if(num<=0 || num>50){printf("Número inválido"); return 0;}
    else{
        while(num<250){
           printf("%f\n", num);
           num=num*3;
        }
    }
    return 0;
}