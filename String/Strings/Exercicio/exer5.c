/*
Faça um programa que leia uma string e imprima uma mensagem dizendo se ela 
é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade 
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 
Exemplos: ovo, arara, rever, asa, osso etc
*/

#include<stdio.h>
#include<string.h>

int main(){

    char palavra[100];
    char copia[100];

    int i = 0;
    int tamanho = 0;
    int f = 0;

    printf("digite sua string : \n");
    gets(palavra);

    tamanho = strlen(palavra);
    i = tamanho;
    i -= 1;

    for(i; palavra[i] != '\0'; i--){
        copia[f] = palavra[i];
        f++;
    }

    copia[f] = '\0';

    if (strcmp(palavra,copia) == 0){
        printf("palindromo");
    }
    else{
        printf("nao e palindromo");
    }
    
}