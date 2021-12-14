#include<stdio.h>

//Um dos modos de se passar um array para a funcao

void vetor(int *vet, int n){
    for (int i = 0; i < n; i++){
        printf("%d \n", vet[i]);
    }
}

int main(){
    int vet[5] = {1,2,104,90,5};

    vetor(vet, 5);
}