#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;
    p = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++){
        p[i] = i + 1;
    }

    //liberando antes de usar, nao a garantia que os valores usados estarao la ainda
    free(p);

    for (int i = 0; i < 5; i++){
        printf("%d \n", p[i]);
    }
    
}