#include <stdio.h>
#include <stdlib.h>

int main(){

//As operações aritméticas não funcionam em ponteiros genéricos da mesma forma 
//como em ponteiros de tipos definidos. Elas são sempre realizadas com base em uma 
//unidade de memória (1 byte)

 void *p = 0x5DC;
 printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
 //Incrementa p em uma posição
 p++;

 printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
 //Incrementa p em 15 posições

 p = p + 15;
 printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
 //Decrementa p em 2 posições

 p = p - 2;
 printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
 system("pause");

 return 0;
}