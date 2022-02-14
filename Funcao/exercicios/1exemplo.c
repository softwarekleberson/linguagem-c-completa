#include<stdio.h>

void vet(int *vetor, int n){

    for (int i = 0; i < n; i++){

        printf("%d \n", vetor[i]);        
    }

}

int main(){

    int vetor[5] = {1,2,3,4,5};

    vet(vetor, 5);
}