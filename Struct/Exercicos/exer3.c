/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles
*/

#include<stdio.h>
#include<stdio.h>

struct distancia{
    int x;
    int y;
    int distanciaPontos;
};

int main(){

    struct distancia pontos;

    printf("Ponto X :", pontos.x);
    scanf("%d",&pontos.x);

    printf("Ponto Y :", pontos.x);
    scanf("%d",&pontos.y);

    pontos.distanciaPontos = pontos.x - pontos.y;

    printf("distancia entre X : %d e Y : %d e igual a : %d", pontos.x, pontos.y, pontos.distanciaPontos);
}