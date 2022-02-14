#include<stdio.h>
#include<stdlib.h>

void imprime_matriz(int *matriz, int n){

    for (int i = 0; i < n; i++){
        printf("%d \n", matriz[i]);
    }   
}

void dobra_valor(int *matriz, int n){

    for (int i = 0; i < n; i++){
        printf("%d \n", matriz[i] * 2);
    } 
    
}

int main(){

    int matriz[2][2] = {{1,2}, {10,20}};

    imprime_matriz(&matriz[0][0], 4);
    dobra_valor(&matriz[0][0], 4);

}