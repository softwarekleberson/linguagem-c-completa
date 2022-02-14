#include<stdlib.h>
#include<stdio.h>

struct atheta{

    char nome [100];
    char esporte[100];
    int idade;
    float altura;
    
};

/* Main */

int main(){


    int idade = 0;
    float altura;

    struct atheta nomes[3];
    

    for(int i = 0; i < 3; i ++){

        printf("Seu nome ................ : \n");
        fflush(stdin);
        fgets(nomes[i].nome, 100, stdin);

        printf("Seu esporte ................ : \n");
        fflush(stdin);
        fgets(nomes[i].esporte, 100, stdin);

        printf("Sua idade ................. : \n");
        scanf("%d",&nomes[i].idade);

        printf("Sua altura ................. : \n");
        scanf("%f",&nomes[i].altura);

    }

     printf("\n -------------------------------- Lendo Os Dados ----------------------------- \n\n");

    for (int i = 0; i < 3; i++){
        
        printf("Nome ................................. : %s\n", nomes[i].nome);
        printf("Esporte ............................ : %s\n", nomes[i].esporte);
        printf("Idade ................................ : %d\n", nomes[i].idade);
        printf("Altura ................................ : %.2f\n\n", nomes[i].altura);

    }

    getch();
       
}
