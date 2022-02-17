/*
Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. Essa função deve retornar,
por referência, dois valores: a soma dos números pares e ímpares.
*/

#include<stdio.h>
#include<stdlib.h>


void soma_impar(int *vetor, int n, int *impar, int *par){

    for (int i = 0; i < n; i++){

        if(vetor[i] % 2 != 0){
            *impar += vetor[i];
        }

        else{
            *par += vetor[i];
        }
       
    }
    
}


int main(){

    int vet[5] = {1,2,3,4,5,6};
    int par = 0;
    int impar = 0;

    soma_impar(&vet, 6, &impar, &par);

    printf("%d \n", impar);
    printf("%d \n", par);

}