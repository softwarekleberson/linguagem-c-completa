/*
Faça um programa que leia uma string e a imprima de trás para a frente
*/

#include<stdio.h>
#include<string.h>

int main(){

    char palavra[100];
    int i = 0;
    int tamanho = 0;

    printf("digite sua string : \n");
    fgets(palavra,100,stdin);

    tamanho = strlen(palavra);
    i = tamanho;
    i -= 1;

    for(i; palavra[i] != '\0'; i--){
        printf("%c",palavra[i]);
    }
    
}