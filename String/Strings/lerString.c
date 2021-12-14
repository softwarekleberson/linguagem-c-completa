#include<stdio.h>
#include<stdlib.h>

int main(){
    char nome[30];

    //fgest : lê tudo até o ENTER

    printf("digite seu nome : ");
    fgets(nome, 30, stdin);
    printf("seu nome : %s",nome);
}