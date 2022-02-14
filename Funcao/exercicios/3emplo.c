#include<stdio.h>
#include<stdlib.h>

struct referencia{

    int x;
    int y;
};

void imprime(int *n){

    *n = *n * 5;
    printf("%d \n", *n);
}


int main(){

    struct referencia variavel = {20,40};
    printf("%d \n", variavel.x);

    imprime(&variavel.x);
    printf("%d \n", variavel.x);
}