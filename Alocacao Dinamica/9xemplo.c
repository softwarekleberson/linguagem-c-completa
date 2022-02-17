#include<stdio.h>
#include<stdlib.h>

int main(){

    int Ncoluna = 2;
    int NLinha = 2;

    int *p;

    p = (int *)malloc(Ncoluna * NLinha * sizeof(int));

    for (int i = 0; i < NLinha; i++){

        for (int j = 0; j < Ncoluna; j++){
            p[i * Ncoluna * j] = i + j;
        }
        
    }
    
    free(p);
    p = NULL;
}