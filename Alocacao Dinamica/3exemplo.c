#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p;
    p = (int *) malloc(5 * sizeof(int));

    if(p == NULL){
        printf("sem espaco suficiente");
        system("pause");
        exit(1);
    }

    for (int i = 0; i < 5; i++){
        printf("digite na posicao %d : ", i);
        scanf("%d",&p[i]);
    }
    

}