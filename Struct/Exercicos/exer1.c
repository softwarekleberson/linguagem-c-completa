/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e 
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da 
estrutura lida
*/

#include<stdlib.h>
#include<stdio.h>

struct cadastro{
    char nome[100];
    int idade;
    char endereco[100];
};


int main(){

    struct cadastro kleber;

    printf("digite seu nome : \n");
    fgets(kleber.nome,100,stdin);

    printf("digite o seu endereco : \n");
    fgets(kleber.endereco,100,stdin);

    printf("digite a sua idade : \n");
    scanf("%d",&kleber.idade);

    printf("Seu nome e %s \n", kleber.nome);
    printf("Sua idade e %d \n", kleber.idade);
    printf("Seu endereco %s \n", kleber.endereco);

}