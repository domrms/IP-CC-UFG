#include <stdio.h>

int main (){
    double i=1;
    int n;
    double s, soma;

    scanf("%d", &n);

    if (n>1){
        while (i<=n){
        s= 1/i;
        i=i+1;
        soma=soma+s;
    }

    printf("%.6f", soma);

    } else

    printf("Numero invalido!\n");

    return 0;
}