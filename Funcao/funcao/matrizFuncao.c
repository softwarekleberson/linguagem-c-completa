#include <stdio.h>
#include <stdlib.h>

void imprime_matriz(int *matriz, int n){
    for (int i = 0; i < n; i++){
        printf("%d \n", matriz[i]);
    }
}

void dobro_matriz(int *dobro, int n){
    for (int i = 0; i < n; i++){
        printf("%d \n", dobro[i]);
    }
}


int main(){

    int matriz[2][2] = {{1,4}, {2,8}};
    imprime_matriz(&matriz[0][0],4);   

    int dobro[3][3] = {{10, 20, 30}, {40,50,60}, {70,80,90}};
    dobro_matriz(&dobro[0][0], 9);

    system("pause");
    return 0;
}