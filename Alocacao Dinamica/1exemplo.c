#include<stdio.h>
#include<stdlib.h>

struct exemplo
{
    int x;
    int y;
    char nome[60];
};


int main(){

    printf("tamanho de um char : %d \n", sizeof(char));
    printf("tamanho do float : %d \n", sizeof(float));
    printf("tamanho do int : %d \n", sizeof(int));
    printf("tamanho da struct : %d \n", sizeof(struct exemplo));

}