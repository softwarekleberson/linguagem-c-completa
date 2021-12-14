#include <stdio.h>
#include <stdlib.h>

/*
Nesse exemplo, a função fgetc() é utilizada juntamente com a constante EOF para 
ler não apenas alguns caracteres, mas para continuar lendo caracteres enquanto não 
chegamos ao final do arquivo.
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

 while((c = fgetc(arq)) != EOF){
    printf("%c",c);
 }

fclose(arq);
system("pause");
 return 0;
}