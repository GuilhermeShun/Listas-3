#include <stdio.h>
int main(){
    float n, m, p; int cont;
    printf("Base (real): ");
    scanf("%f", &n);
    while (1){
        printf("Expoente (natural): ");
        scanf("%f", &m);
        if((int)m == m || m<0) {break;}
        else{printf("Número não natural.\n");}
    }
    cont=1;
    p=1;
    while(cont<=m){
        p=p*n;
        ++cont;
    }
    printf("Resultado: %f\n", p);
    return 0;
}