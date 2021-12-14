#include<stdlib.h>
#include<stdio.h>

/*
* Essa funcao strcmp devolve uma comparacao de strings, em que o resultado e 0 ou 1
* se 0 elas são iguais, ela tambem e caseSensitive.
*/

int main(){
    char vet1[100];
    char vet2[100];

    printf("Digite sua 1 string : ");
    gets(vet1);

    printf("Digite sua 1 string : ");
    gets(vet2);

    if (strcmp(vet1,vet2) == 0){
        printf("strings iguais \n");
    }

    else{
        printf("strings diferentes \n");
    }
    
}