#include <stdio.h>
#include <math.h>
int main(){
    int cont, prod;
    prod=1;
    for(cont=0;cont<=15;cont++){
        printf("3 ^ %i = %i\n", cont, prod);
        prod=prod*3;
    }
    return 0;
}