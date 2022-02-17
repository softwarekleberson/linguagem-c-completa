#include<stdio.h>
#include<stdlib.h>

int main(){

 /*
 aloca tudo e inicializa com o valor 0
 igual a funcao malloc
 */


    int *p;
    p =  (int *)calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("%d \n", p[i]);
    }
    
}