#include <stdio.h>

int main(){
    float preco_fabrica, distribuidor, impostos, preco_final;

    scanf("%f", &preco_fabrica);
    scanf("%f", &distribuidor);
    scanf("%f", &impostos);

    preco_final= (preco_fabrica + (preco_fabrica * distribuidor / 100) + (preco_fabrica * impostos / 100));

    printf("O VALOR DO CARRO E = %.2f \n", preco_final);

    return 0;
}