#include <stdio.h>
#include <stdlib.h>

/*
No exemplo da Figura 8.6, p2 é atribuído a p1. Essa operação está correta, pois 
ambas as variáveis são do tipo ponto. Sendo assim, o valor de p2.x é copiado para p1.x
e o valor de p2.y é copiado para p1.y.
*/

struct ponto {
 int x;
 int y;
};

struct novo_ponto {
 int x;
 int y;
};

int main(){

 struct ponto p1, p2= {1,2};
 struct novo_ponto p3= {3,4};

 p1 = p2; 
 printf("p1 = %d e %d", p1.x,p1.y);

 //ERRO! TIPOS DIFERENTES
 //p1 = p3; 
 printf("p1 = %d e %d", p1.x,p1.y);
 system("pause");
 return 0;
}