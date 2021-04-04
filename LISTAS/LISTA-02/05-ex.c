#include <stdio.h>

int main (){
    int horas; 
    double horas3, horas1, resto, vf;

    scanf("%d", &horas);

        horas3= (horas /3 ) * 10;
        resto= (horas % 3);
        horas1= (resto * 5);

        vf= horas3 + horas1;

        printf("O VALOR A PAGAR E = %.2lf \n", vf);

        return 0;
    }

