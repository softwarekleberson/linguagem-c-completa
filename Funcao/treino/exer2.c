#include<stdio.h>
#include<stdlib.h>

void matriz_principal(int *matriz, int n, int *soma_principal){

    for (int i = 0; i < n; i++){

        if(i == 8 || i == 4  || i == 0){
            *soma_principal = *soma_principal + matriz[i];
        }
    }
    
    return *soma_principal;
}

void matriz_secundarias(int *matriz, int n, int *soma_secundaria){

    for (int i = 0; i < n; i++){
        
        if(i == 6 || i == 4 || i == 2){
            *soma_secundaria = *soma_secundaria + matriz[i];
        }
    }
    
    return *soma_secundaria;
}

int main(){

    int soma_principal = 0;
    int soma_secundaria = 0;
    int matriz[3][3] = {{2,5,7}, {10,8,3}, {4,15,0}};

    matriz_principal(&matriz[0][0], 9, &soma_principal);
    matriz_secundarias(&matriz[0][0], 9, &soma_secundaria);

    printf("%d \n soma principal : ", soma_principal);
    printf("%d \n soma secundaria : ", soma_secundaria);

}