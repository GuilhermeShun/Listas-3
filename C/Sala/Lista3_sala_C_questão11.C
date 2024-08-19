#include <stdio.h>
int main(){
    int i, j, temp, arr[5];
    printf("Primeiro: ");
    scanf("%i", &arr[0]);
    printf("Segundo: ");
    scanf("%i", &arr[1]);
    printf("Terceiro: ");
    scanf("%i", &arr[2]);
    printf("Quarto: ");
    scanf("%i", &arr[3]);
    printf("Quinto: ");
    scanf("%i", &arr[4]);
    for(i=0; i<4; ++i){
        for(j=0; j<4; ++j){
            if(arr[j]>arr[j+1]){                
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nO maior valor é %i", arr[4]);
    printf("\nO menor valor é %i", arr[0]);
    return 0;
}