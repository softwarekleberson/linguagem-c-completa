#include <stdio.h>
#include <stdlib.h>

int main(){

    int **p;
    int i, j;
    int N = 2;

    p = (int **)malloc(N * sizeof(int *));

    for (i = 0; i < N; i++){
        p[i] = (int *)malloc(N * sizeof(int *));
    
    for (j = 0; j < N; j++)
        scanf("%d", &p[i][j]);
    }
    
}



