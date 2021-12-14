#include<stdlib.h>

typedef struct 
{
    char nome[100];
    int idade;
}pessoa;


int main(){
    pessoa maria;
    pessoa *p = &maria;

    strcpy(maria.nome, "maria joakina");
    maria.idade = 32;

    printf("%s, %d\n", (*p).nome, (*p).idade);

    (*p).idade = 30;
    printf("%s, %d\n", maria.nome, maria.idade);
}