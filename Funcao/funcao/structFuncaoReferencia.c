#include<stdio.h>

struct referencia
{
    int x;
    int y;
};

void imprime(struct referencia *p){
    (*p).x = 10;
    (*p).y = 20;
}


int main(){
    struct referencia p;
    imprime(&p);

    printf("Ponto X : %d \n",p.x);
    printf("Ponto X : %d \n",p.y);

}