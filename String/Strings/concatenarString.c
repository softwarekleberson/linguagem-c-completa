#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main(){
    char dia[60] = "25 de janeiro";
    char condicao[60] = " esta bem quente";

    strcat(dia, condicao);

    printf("%s", dia);
}