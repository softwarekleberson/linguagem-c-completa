#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

 FILE *arq;
 char string[100];
 int i;

 arq = fopen("arquivo.txt","w");

 if(arq == NULL){
    printf("Erro na abertura do arquivo");
    system("pause");
    exit(1);
 }

 printf("Entre com a string a ser gravada no arquivo:");
 gets(string);

 //Grava a string, caractere a caractere
 for(i = 0; i < strlen(string); i++)
 fputc(string[i], arq);
 fclose(arq);

 system("pause");
 return 0;
}