#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;

    p = (int*) malloc(5* sizeof(int));

    for (int i = 0; i < 5; i++){
        p[i] =  i + 1;
    }
    
    for (int i = 0; i < 5; i++){
        printf("%d \n", p[i]);
    }
    
    //diminuindo o tamanho da alocacao
    p = realloc(p, 3* sizeof(int));

    for (int i = 0; i < 3; i++){
        p[i] =  i + 1;
    }
    
    for (int i = 0; i < 3; i++){
        printf("%d \n", p[i]);
    }

    // aloca um tamanho de 10 espacos
    p = realloc (p, 10* sizeof(int));

    for (int i = 0; i < 10; i++){
        p[i] =  i + 1;
    }
    
    for (int i = 0; i < 10; i++){
        printf("%d \t", p[i]);
    }
}