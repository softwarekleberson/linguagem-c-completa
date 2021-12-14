#include <stdio.h>
#include <stdlib.h>

int main(){

//Usando ponteiro

 int vet[5]= {1,2,3,4,5};
 int *p = vet;
 int i;
 int posicao = 2;

 for (i = 0;i < 5;i++){
    printf("%d\n", (&p+i));
 }

 for (i = 0;i < 5;i++){
    printf("%d\n", *(p+i));
 }

printf("%d\n", *(p+posicao));
 
printf("%p\n", (&p+posicao));

 system("pause");
 return 0;
}