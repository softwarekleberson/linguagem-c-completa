/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado um ponto e exiba a distância 
dele até a origem das coordenadas, isto é, a posição (0,0)
*/

#include<stdio.h>
#include<stdlib.h>

struct coordenada{

    int x;
    int y;
    int distanciaX;
    int distanciaY;

};

int main(){

    struct coordenada ponto;

    ponto.distanciaX = 0;
    ponto.distanciaY = 0;

    printf("digite coordenada do ponto x : \n");
    scanf("%d",&ponto.x);

    printf("digite coordenada do ponto y : \n");
    scanf("%d",&ponto.y);

    ponto.distanciaX -= ponto.x;
    ponto.distanciaY -= ponto.y;

    printf("POnto X : %d \n", ponto.x);
    printf("Ponto Y : %d \n", ponto.y);

    printf("Distancia de X : %d ", ponto.distanciaX);
    printf("Distancia de Y : %d ", ponto.distanciaY);

}