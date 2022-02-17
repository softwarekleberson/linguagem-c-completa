#include <stdio.h>
#include <stdlib.h>

int main(){

    int **p;
    int N = 2;
    int i, j;

    p = (int **) malloc(N * sizeof(int *));

    for ( i = 0; i < N; i++){
        p[i] = (int *) malloc(N * sizeof(int *));
    }

    for ( i = 0; i < N; i++){
        free(p[i]);
    }

    free(p);
}
