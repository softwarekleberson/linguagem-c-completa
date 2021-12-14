#include<stdio.h>

struct referencia
{
    int x;
    int y;
};

void imprime(int *n){

    *n = *n + 10;
    printf("%d \n",*n);

}

int main(){

    struct referencia p1 = {10,20,30};
    imprime(&p1.x);

    printf("%d",p1.x);

}