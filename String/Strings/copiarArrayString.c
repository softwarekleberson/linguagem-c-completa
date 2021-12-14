#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[20] = {"ola tudo bem"};
    char recebe[20];
    int i;

    for(i = 0; nome[i] != '\0'; i ++){
        recebe[i] = nome[i];
    }

    recebe[i] = '\0';

    printf("%s",recebe);

}