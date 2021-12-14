#include<stdio.h>

struct cartesiano
{
    int x;
    int y;
};

void imprimePonto(struct cartesiano ponto){

    printf("Ponto X : %d \n",ponto.x);
    printf("Ponto Y : %d \n", ponto.y);
}

int main(){

    struct cartesiano ponto = {10,20};
    imprimePonto(ponto);
}