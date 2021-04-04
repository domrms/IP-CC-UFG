#include <stdio.h>;

int main(){
    float raio, altura, area, custo;

    scanf("%f", &raio);
    scanf("%f", &altura);

area= (2 *(3.14159 * raio * raio)) + (2 * 3.14159 * raio *altura);
custo= area * 100;

printf("O VALOR DO CUSTO E = %.2f \n", custo);

    return 0;
}