#include<stdio.h>

struct conta{
    int luz;
    int agua;
};

void boleto(int n){
    printf("valor conta : %d \n",n);
}

int main(){

    struct conta pagar = { 150, 500};
    boleto(pagar.luz);
    boleto(pagar.agua);
}