#include <stdio.h>

int main (){
    double horas, minutos, segundos;
    double horas_s, minutos_s, tempo_final;

    scanf("%lf", &horas);
    scanf("%lf", &minutos);
    scanf("%lf", &segundos);

    horas_s= horas * 3600;
    minutos_s= minutos * 60;
    tempo_final= horas_s + minutos_s + segundos;

    printf("O TEMPO EM SEGUNDOS E = %.0lf \n", tempo_final);


    return 0;

}