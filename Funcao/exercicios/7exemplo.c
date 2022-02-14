#include<stdlib.h>
#include<stdio.h>

struct cartesiano
{
    int x;
    int y;
    int z;
};

void ponto_cartesiano(struct cartesiano p){

    printf("ponto x %d \n", p.x);
    printf("ponto y %d \n", p.y);
    printf("ponto z %d \n",p.z);

}

int main(){

    struct cartesiano p = {10,20,30};
    ponto_cartesiano(p);

}