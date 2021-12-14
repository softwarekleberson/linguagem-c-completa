#include<stdio.h>
#include<stdlib.h>

int main(){
    char vet1[10];
    char vet2[10];

    gets(vet1);

    strcpy(vet2,vet1);

    printf("Primeira string : %s \n", vet1);
    printf("Segunda string : %s \n",vet2);

}