#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int count = 10;
 int *p;
 
 p = &count;
 printf("conteudo apontado por p: %d \n", *p);
 
 *p = 12;
 printf("conteudo apontado por p: %d \n", *p);
 printf("conteudo de count : %d \n", count);
 
 //observe que como o *p = 12 isso alterou também a variavel count
 //é como elas estivessem juntas
 return 0;
}