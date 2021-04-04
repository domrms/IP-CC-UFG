#include <stdio.h>
#include <math.h>

int main(){ //int para inteiros
    int n1, n2, n3, n4, n_entrada, controle, resultado;

    scanf("%d", &n_entrada);

    n3 = n_entrada % 10;
    controle= n_entrada / 10;

    n2 = controle % 10;
    controle= controle / 10;

    n1 = controle % 10;
    controle= n1 + (n2 * 3) + (n3 * 5);

    n4 = controle % 7;

    resultado = (n_entrada * 10 + n4);

    printf("O NOVO NUMERO E = %d\n", resultado);

    return 0;
}