#include<stdlib.h>

int main(){

    int valor = 30;
    int *ponteiro;

    //atribuindo o endereço da variavel valor a ponteiro
    ponteiro = &valor;

    printf("conteudo da variavel valor %d : \n", valor);

    //esse &valor indica que eu quero o endereco de memoria da variavel valor
    printf("endereco da variavel valor %x : \n", &valor);

    //como o endereco de memoria de valor foi atribuido a ponteiro, o conteudo de ponteiro possui
    // o endereco de memoria dele
    printf("conteudo da variavel ponteiro %x : \n", ponteiro);

}