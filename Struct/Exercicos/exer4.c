#include<stdlib.h>
#include<stdio.h>

struct aluno
{
    char nome[100];
    int matricula;
    float notas[2];
    float media;
};

int main(){

    struct aluno kleberson[2];
    float maiorNota = 0;

    printf("\n ----------------------- Cadastro Aluno ----------------------------------- \n\n");

    for (int i = 0; i < 2; i++) {
            
        printf("Seu nome :\n");
        fflush(stdin);
        fgets(kleberson[i].nome,100,stdin);

        printf("Seu numero matricula : \n");
        scanf("%d",&kleberson[i].matricula);

        printf("Nota 1 : \n");
        scanf("%f",&kleberson[i].notas[0]);

        printf("Nota 2 : \n");
        scanf("%f",&kleberson[i].notas[1]);

        printf("Nota 3 : \n");
        scanf("%f",&kleberson[i].notas[2]);

        kleberson[i].media = (kleberson[i].notas[0] + kleberson[i].notas[1] + kleberson[i].notas[2]) / 3;

    }

    printf("\n -------------------------------- Lendo Os Dados ----------------------------- \n\n");

    for (int i = 0; i < 2; i++){
        
        printf("Nome ................................. : %s\n", kleberson[i].nome);
        printf("Matricula ............................ : %d\n", kleberson[i].matricula);
        printf("Media ................................ : %.2f\n\n", kleberson[i].media);
    }

    for (int i = 0; i < 2; i++) {
        
        if (kleberson[i].media > maiorNota){
            maiorNota = kleberson[i].media;
        }
    }

    printf("\n -------------------------------- Maior Nota ----------------------------- \n\n");
    printf("Maior Nota ............................... : %.2f", maiorNota);

    getch();
}