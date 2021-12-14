#include<stdlib.h>


float media(int n, float *notas){

    int i;
    float m = 0, soma = 0;

    for (i = 0; i < n; i++){
        soma = soma + notas[i];
    }

    m = soma / n;

    return m;
    
}

int main(){

    int i;
    float medias;
    float notas[10];

    for (i = 0; i < 10; i++){
        scanf("%f",&notas[i]);
    }
    
    medias = media(10, notas);

    printf("media %.1f",medias);

}