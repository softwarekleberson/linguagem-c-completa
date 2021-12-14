/*
 Através da Linguagem C, utilize o tipo enum para realizar a enumeração dos dias da semana.
*/

#include<stdio.h>

enum semana {domingo = 1, segunda, terca, quarta, quinta, sexta, sabado}dia;

int main(){

    int dia;

    printf("digite dia semana : ");
    scanf("%d",&dia);

    switch (dia)
    {
    case domingo:
        printf("domingo");
        break;
    
    case segunda:
        printf("segunda");
        break;

     case terca:
        printf("terca");
        break;
    
     case quarta:
        printf("quarta");
        break;

     case quinta:
        printf("quinta");
        break;
    
     case sexta:
        printf("sexta");
        break;

     case sabado:
        printf("sabado");
        break;

    default:
        break;
    }
}