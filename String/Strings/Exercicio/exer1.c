#include<stdlib.h>
#include<stdio.h>
#include<strings.h>

//Programa lê string e imprime na tela

int main(){
    char string[100];

    printf("digite algo : \n");
    fgets(string,100,stdin);

    printf("%s",string);
}
