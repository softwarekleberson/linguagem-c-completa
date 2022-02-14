#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void logaritimo(int x){

    if( x <= 0) return;
    printf("Log = %f\n",log(x));

}


int main(){

    float x;

    printf("digite seu valor : \n");
    scanf("%f",&x);
    logaritimo(x);
}

