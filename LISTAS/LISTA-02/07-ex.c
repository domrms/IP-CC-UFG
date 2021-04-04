#include <stdio.h>

int main(){
    double salario, reaj1, reaj2;

    scanf("%lf", &salario);

    if (salario > 300.00){

        reaj2= salario + ((salario * 30) / 100);
        printf("SALARIO COM REAJUSTE = %.2lf \n", reaj2);

    }else if (salario <= 300.00){

        reaj1= salario + ((salario * 50) / 100);
        printf("SALARIO COM REAJUSTE = %.2lf \n", reaj1);
    }

    return 0;
}