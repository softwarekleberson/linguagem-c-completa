/*
Escreva um programa que leia uma string do teclado e converta todos os seus 
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está 
entre 97 e 122
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char frase[40];
    int i;

    printf("Entre com o texto: ");
    fgets(frase,39,stdin);

    for(i = 0; frase[i] != '\0'; i++)
        if(frase[i] >= 97 && frase[i] <= 122)
            frase[i] -= 32;

    printf("\nNovo texto: %s\n", frase);

    return 0;
}