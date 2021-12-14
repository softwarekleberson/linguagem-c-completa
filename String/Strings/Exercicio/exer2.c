//Faça um programa que leia uma string e imprima as quatro primeiras letras dela

#include<stdio.h>
#include<string.h>

int main(){

    char string[20];

    printf("Digite algo : \n");
    gets(string);

    for (int i = 0; i < 4; i++){
        printf("%c",string[i]);
    }
    
    system("pause");

}