/*
Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em minúscula. 
Dica: some 32 dos caracteres cujo código ASCII está entre 
65 e 90.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[100];

    printf("digite palavra : \n");
    fgets(palavra,100,stdin);

    for (int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] >= 65 && palavra[i] <= 90){
            palavra[i] += 32;
        }
    }

    printf("converter em minusculo %s \n", palavra);
    
}
