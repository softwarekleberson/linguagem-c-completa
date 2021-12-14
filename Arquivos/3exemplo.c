#include <stdio.h>
#include <stdlib.h>

/*
*Cada chamada da função fgetc() lê um único caractere do arquivo especificado.
*/

/*
*No exemplo anterior, a função fgetc() é utilizada para ler cinco caracteres de um 
*arquivo. Note que a função fgetc() sempre retorna o caractere atualmente apontado 
*pelo indicador de posição interna do arquivo especificado.
*/

int main(){

 FILE *arq;
 char c;

 arq = fopen("arquivo.txt","r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
 }

 int i;

    for(i = 0; i < 5; i++){
        c = fgetc(arq);
        printf("%c",c);
 }

 fclose(arq);
 system("pause");
 return 0;

}