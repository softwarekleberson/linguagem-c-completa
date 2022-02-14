#include<stdio.h>
#include<stdlib.h>

struct contas
{
    int luz;
    int agua;
};


void imprime(int pagar){

    printf("%d \n", pagar);
}


int main(){

    struct contas pagamento = {150, 300};
    imprime(pagamento.agua);
    imprime(pagamento.luz);

}