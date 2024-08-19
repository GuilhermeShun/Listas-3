#include <stdio.h>
int main(){
    char op;
    float a, b, res;
    do{
        do{
            printf("\nInsira a operação desejada (+, -, * ou /).\nPara encerrar a calculadora, digite 'S'.\n");
            scanf(" %c", &op);
        }
        while(op!='+' && op!='-' && op!='*' && op!='/' && op!='S');
        if(op=='S'){break;}
        printf("Primeiro número: ");
        scanf("%f", &a);
        printf("Segundo número: ");
        scanf("%f", &b);
        if(op=='+'){
            res=a+b;
            printf("%f", res);
        }    
        else if(op=='-'){
            res=a-b;
            printf("%f", res);
        }
        else if(op=='*'){
            res=a*b;
            printf("%f", res);
        }
        else{
                res=a/b;
            printf("%f", res);
        }
    }
    while (1);
    printf("Calculadora encerrada.");
    return 0;
}