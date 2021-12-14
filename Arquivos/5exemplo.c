#include <stdio.h>
#include <stdlib.h>

/*
Basicamente, a função feof() recebe como parâmetro o ponteiro fp, que determina 
o arquivo a ser verificado. Como resultado, a função retorna um valor inteiro igual a 
ZERO se ainda não tiver atingido o final do arquivo. Um valor de retorno diferente de 
zero significa que o final do arquivo já foi atingido.
*/

int main(){

 FILE *fp;
 char c;

 fp = fopen("arquivo.txt","r");
 if(fp==NULL){
    printf("Erro na abertura do arquivo\n");
    system("pause");
    exit(1);
 }

 while(!feof(fp)){
    c = fgetc(fp);
    printf("%c",c);
 }

 fclose(fp);
 system("pause");
 return 0;
}