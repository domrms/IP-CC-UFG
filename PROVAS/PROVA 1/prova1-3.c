#include <stdio.h>

int main (){
    int dia, mes, ano, vfinal;
    
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ano%4==0 && ano%100!=0 || ano%100==0 && ano%400==0){
        if (mes==1){
        vfinal=dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==2){
        vfinal=31+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==3){
        vfinal=60+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==4){
        vfinal=91+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==5){
        vfinal=121+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==6){
        vfinal=152+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==7){
        vfinal=182+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==8){
        vfinal=213+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==9){
        vfinal=244+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==10){
        vfinal=274+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==11){
        vfinal=305+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==12){
        vfinal=335+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);}
        
        }else 
        if (mes==1){
        vfinal=dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==2){
        vfinal=30+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==3){
        vfinal=59+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==4){
        vfinal=90+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==5){
        vfinal=120+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==6){
        vfinal=151+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==7){
        vfinal=181+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==8){
        vfinal=212+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==9){
        vfinal=243+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==10){
        vfinal=273+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==11){
        vfinal=304+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }else if (mes==12){
        vfinal=334+dia;
        printf("NUMERO DE DIAS E %d\n", vfinal);
        }

    return 0;
}

