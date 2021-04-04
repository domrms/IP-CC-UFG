#include <stdio.h>

int main(){
    float n_entrada, n_arredondado;

    scanf("%f", &n_entrada);

    n_arredondado= ((int)(n_entrada * 10.0 + 0.5) / (10.0));
    printf("%f\n", n_arredondado);

    n_arredondado= ((int)(n_entrada * 100.0 + 0.5) / (100.0));
    printf("%f\n", n_arredondado);

    n_arredondado= ((int)(n_entrada * 1000.0 + 0.5) / (1000.0));
    printf("%f\n", n_arredondado);

    return 0;


}

