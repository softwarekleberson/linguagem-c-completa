/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura 
deve conter o número de matrícula do aluno, seu nome e as notas de três provas. 
Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa 
estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média 
geral dentre os cinco
*/

#include<stdlib.h>
#include<stdio.h>

struct diciplina {

    char nome[100];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;

};

int main(){

    struct diciplina aluno[5];

    for (int i = 0; i < 5; i++){

        fgets(aluno[i].nome,100,stdin);
        scanf("%d",&aluno[i].matricula);
        
        scanf("%f",&aluno[i].nota1);
        scanf("%f",&aluno[i].nota2);
        scanf("%f",&aluno[i].nota3);

    }

    
}