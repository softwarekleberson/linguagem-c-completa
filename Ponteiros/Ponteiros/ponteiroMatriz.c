#include<stdlib.h>

void matriz_ponteiro(int *matriz, int linhas, int colunas){
    int lin, col;

    for ( lin = 0; lin < linhas; lin++){
        if (lin != 0){
            printf("\n");
        }
        for (col = 0; col < colunas; col++){
            printf("\t%d", matriz[lin * colunas + col]);
        }
        
    }
    
}

int main(){

    int mtr[4][5];
    int lin, col, cont;
    cont = 0;

    for ( lin = 0; lin < 4; lin++){
        for (col = 0; col < 5; col++){
            mtr[lin][col] = cont ++;
        }
    }
    
    matriz_ponteiro(mtr[0], 4, 5);
}