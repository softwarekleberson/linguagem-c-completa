/*

Escreva uma função para o cálculo do volume e área de uma esfera
V = 4/3 π + r3,
A = 4 π * r2
em que π = 3.1414592. O valor do raio r deve ser passado por parâmetro, e os
valores calculados devem ser retornados por referência.

*/
#include<stdio.h>
#include<stdlib.h>

float volume(float raio, float *volume_total){

    float pi = 3.14;
    *volume_total = (4/3 * pi + (raio * raio * raio));

    return *volume_total;

}


float area(float raio, float *area_total){

    float pi = 3.14;
    *area_total = (4 * pi * (raio * raio));

    return *area_total;
}


int main(){

    float area_total = 0;
    float volume_total = 0;
    float raio = 5.15;

    printf("%f \n volume total : ", volume(raio, &volume_total)); 
    printf("%f \n area total : ", area(raio, &area_total));
    
}