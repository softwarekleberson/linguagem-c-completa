#include <stdio.h>
#include <stdlib.h>

int main(){

    char a = 'a';
    char *ptr = &a;
    char **ptrPTR = &ptr;

    //Endereço em p2
    printf("Endereco de ptrPTR  -> %p \n", ptrPTR);

    //Conteudo do endereço
    printf("Conteudo do endereco -> %p \n", *ptrPTR);

    //Conteudo do endereço do endereço
    printf("Conteudo do endereco do endereco -> %p \n", **ptrPTR);

}