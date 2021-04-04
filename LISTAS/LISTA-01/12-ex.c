#include <stdio.h>

int main(){
double m, a, t, vel, espaco, trabalho;

scanf("%lf", &m);
scanf("%lf", &a);
scanf("%lf", &t);

vel= a * t * 3.6;
espaco= (a * t * t) / 2;
trabalho= ((m * 1000) * (a * t) * (a * t)) / 2;

printf("VELOCIDADE = %.2lf \n", vel);
printf("ESPACO PERCORRIDO = %.2lf \n", espaco);
printf("TRABALHO REALIZADO = %.2lf \n", trabalho);

    return 0;
    }