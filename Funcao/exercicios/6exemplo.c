#include<stdio.h>
#include<stdlib.h>

struct pontos
{
    int x;
    int y;
};

void imprime_pontos(struct pontos *p){

    (*p).x = 100;
    (*p).y = 200;

}

int main(){

struct pontos p = {10,60};
imprime_pontos(&p);

printf("%d \n", p.x);
printf("%d \n", p.y);

}