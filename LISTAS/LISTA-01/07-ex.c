#include <stdio.h>

int main (){
    float altura, aresta, area_h, volume;

    scanf("%f", &altura);
    scanf("%f", &aresta);

area_h= (3 * aresta * aresta * sqrt(3)) / 2;
volume= (area_h * altura) / 3;

     printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", volume);

    return 0;

}