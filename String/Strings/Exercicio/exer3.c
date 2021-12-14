/*Sem usar a função strlen(), faça um programa que leia uma string e imprima 
quantos caracteres ela possui
*/
#include<stdio.h>
#include<string.h>

int main(){

    char palavra[100];
    int cont = 0;

    printf("digite sua string :");
    fgets(palavra,100,stdin);

    for (int i = 1; palavra[i] != '\0'; i++){
        cont += 1;
    }
    
    printf("%d",cont);
}