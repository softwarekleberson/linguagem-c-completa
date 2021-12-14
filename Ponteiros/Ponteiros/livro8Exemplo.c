#include <stdio.h>
#include <stdlib.h>

int main(){

 int *pvet[2];
 int x = 10, y[2] = {20,30};

 pvet[0] = &x;
 pvet[1] = y;

 //imprime os endereços das variaveis
 printf("Endereco pvet[0]: %p\n",pvet[0]);

 printf("Endereco pvet[1]: %p\n",pvet[1]);

 //imprime o conteúdo de uma variável
 printf("Conteudo em pvet[0]: %d\n",*pvet[0]);

 //imprime uma posição do vetor / No caso esse [1] e o segundo elemento em que o ponteiro aponta, e o [1]
 // segundo elento do array
 printf("Conteudo pvet[1][1]: %d\n",pvet[1][1]);

 //apontar para o 1 elento do array e o primeiro valor do array y
 printf("Conteudo pvet[1][2] : %d \n",pvet[1][0]);

 system("pause");
 return 0;
}