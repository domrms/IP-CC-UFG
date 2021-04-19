#include <stdio.h>

int converteEmNotasMoedas (int n);

int main (){
    int n;

    scanf("%d", &n);
    converteEmNotasMoedas(n);

    return 0;

}

int converteEmNotasMoedas (int n){

    int op1, op2, op3, op4, soma;

    // 100 reais
    op1= n/100;
    printf("NOTAS DE 100 = %d \n", op1);

    //50 reais
    op2= n%100/10;
    op2= op2 / 5;
    printf("NOTAS DE 50 = %d \n", op2);

    //10 reais
    op3= n%100/10;
    op3= op3%5;
    printf("NOTAS DE 10 = %d \n", op3);
    
    // moedas de 1
    op4= n - (op1*100 + op2*50 + op3*10);
    printf("MOEDAS DE 1 = %d \n", op4);

    return 0;

}