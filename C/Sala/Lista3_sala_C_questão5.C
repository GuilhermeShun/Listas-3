//Lista 3 sala, questão 5 (em C)
#include <stdio.h>

int main(){
    int cont;
    for(cont=1; cont<200; cont++){
        if(cont%4==0){printf("%i\n", cont);}
    }
    return 0;
}