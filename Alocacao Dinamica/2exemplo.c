#include<stdio.h>
#include<stdlib.h>

int main(){

   //alocar dinamicamente um vetor de 5 posições de inteiros, utilizando um ponteiro

   int *p;

    p = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("digite numero na posicao %d : ", i);
        scanf("%d",&p[i]);
    }
    
    for (int i = 0; i < 5; i++){
        printf("%d \t", p[i]);
    }
    
    printf("tamanho do ponteiro : %d", sizeof(p));
}
