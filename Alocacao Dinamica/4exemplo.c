#include<stdio.h>
#include<stdlib.h>

int main(){

    //aloca espaco para 1000 chars

    char *p; 
    p = (char *) malloc(1000 * sizeof(char));

    //aloca espaco para 250 inteiros

    int *i;
    i = (int *) malloc(1000 * sizeof(int));

}