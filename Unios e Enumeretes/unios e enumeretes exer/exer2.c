/*
Escreva um programa, em Linguagem C, que recebe um número e o classifica, por meio de tipos
enumerados, entre número par ou ímpar; positivo, negativo ou zero; múltiplo de 10 ou não
múltiplo.
*/
#include<stdio.h>

enum parImpar {zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez}numero;

int main(){

    int numero;

    printf("digite numero \n");
    scanf("%d",&numero);

    if(numero == 0){
        printf("Numero 0 \n");
    }

    if(numero % 2 == 0 && numero > 0){
        printf("Numero par \n");
    }

    else if(numero % 2 != 0 && numero > 0){
        printf("numero impar \n");
    }

    else if(numero % 10 == 1 && numero > 0){
        printf("numero multiplo de 10 \n");
    }

    else {
        printf("numero negativo");
    }

}