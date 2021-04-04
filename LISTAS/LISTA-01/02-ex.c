#include <stdio.h>

int main (){
    float temperatura_f;
    float polegada;
    float temperatura_c;

    scanf("%f", &temperatura_f);
    scanf("%f", &polegada);

    temperatura_c =  (5 * (temperatura_f - 32) / 9);

    printf("O VALOR EM CELSIUS = %.2f \n", temperatura_c);
    printf("A QUANTIDADE DE CHUVA E = %.2f \n", polegada * 25.4);

    return 0;
}