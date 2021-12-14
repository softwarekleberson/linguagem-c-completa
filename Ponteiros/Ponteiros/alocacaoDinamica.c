#include<stdlib.h>

int main(){
    float *v;
    int i, num_componentes;

    printf("informe o numero de componenetes \n");
    scanf("%d", &num_componentes);

    v = (float * ) malloc (num_componentes * sizeof(float));

    for ( i = 0; i < num_componentes; i++){
        printf("digite numero : \n");
        scanf("%f",&v[i]);
    }

    for ( i = 0; i < num_componentes; i++){
        printf("%.2f \n", v[i]);
    }

    free(v);
    
}