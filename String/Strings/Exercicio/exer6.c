#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j
da string S
*/


int main() {
	
    int a,b;
    char s[10];

    printf("digite algo : \n");
    gets(s);

    printf("digite primeiro valor : \n");
    scanf("%d",&a);

    printf("digite segundo valor : \n");
    scanf("%d",&b);

    
   for (int i = 0; i < 10; i++){
       if (i == a || i == b){
           printf("%c \n",s[i]);
       }
   }
   
    system("pause");
}