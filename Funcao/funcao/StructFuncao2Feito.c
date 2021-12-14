#include<stdio.h>

struct pontoCartesiano 
{
    int x;
    int y;
    int z;
};

void googleMaps(struct pontoCartesiano pontos){

    printf("Ponto X : %d \n", pontos.x);
    printf("Ponto Y : %d \n", pontos.y);
    printf("Ponto Z : %d \n", pontos.z);
}

int main(){

    struct pontoCartesiano pontos = {5,15, 60};
    googleMaps(pontos);

}