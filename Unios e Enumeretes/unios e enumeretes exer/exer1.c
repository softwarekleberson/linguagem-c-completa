/*
Escreva um programa, em Linguagem C, para classificar os alunos de uma determinada matéria
de acordo com sua situação. O programa deve:

ler os dados do aluno referentes a sua nota na disciplina e sua frequência;
classificar o aluno pelas enumerações ''Aprovado'' (Se nota >= 7 e Frequencia >= 70,

''Exame Final'' (Se nota entre 5 e 7 com frequência entre 50 e 70) ou ''Reprovado'' (se
nota < 5 ou frequência <50) de acordo com a nota e frequência
*/
#include<stdio.h>

enum nota {notaReprovado = 4, exameNota = 5 ,notaAprovado = 7}situacaoNota;

enum falta {frequenciaReprovado = 4, frequenciaExame = 5, frequenciaAprovado = 7}situacaoFrequencia;

int main(){
    float situacaoNota;
    int situacaoFrequencia;

    printf("qual a sua nota : ");
    scanf("%f",&situacaoNota);

    printf("frequencia de aulas presente : ");
    scanf("%d",&situacaoFrequencia);

    if(situacaoNota >= notaAprovado || situacaoFrequencia >= frequenciaAprovado){
        printf("Aprovado por Nota e Frequencia");
    }
    else if(situacaoNota <= notaReprovado || situacaoFrequencia <= frequenciaReprovado){
        printf("reprovado");
    }
    else{
        printf("Exame final, nota ou falta");
    }
}