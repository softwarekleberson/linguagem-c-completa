#include<stdio.h>
#include<stdlib.h>

void par(int *numeros, int n,  int *pares){

    for (int i = 0; i < n; i++){
        if(numeros[i] % 2 == 0){
            *pares += numeros[i];
        }
    }
    
}

void impar(int *numeros, int n, int *impares){

    for (int i = 0; i < n; i++){
        if(numeros[i] % 2 != 0){
            *impares += numeros[i];
        }
    }
    
}


int main(){

    int pares = 0;
    int impares = 0;
    int numeros [5] = {2,3,6,5,10};

    par(&numeros, 5, &pares);
    impar(&numeros, 5, &impares);

    printf("%d \n", pares);
    printf("%d \n", impares);
}