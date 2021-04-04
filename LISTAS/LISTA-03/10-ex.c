#include <stdio.h>

int main (){
    int z=1;
    int y=0;
    double n, i, k, s;
    double som, sub, mult, div, op;

    scanf("%lf", &n);
    scanf("%lf", &i);
    scanf("%lf", &k);
    scanf("%lf", &s);

    printf("Tabuada de soma:\n");
    while (z<=k){ 
        op=i+(s*y);
        som= n+op;
        y++;
        z++;
        printf("%.2lf + %.2lf = %.2lf\n", n, op, som);
    }
    z=1;
    y=0;
    printf("Tabuada de subtracao:\n");
    while (z<=k){ 
        op=i+(s*y);
        som= n-op;
        y++;
        z++;
        printf("%.2lf - %.2lf = %.2lf\n", n, op, som);
    }
    z=1;
    y=0;
    printf("Tabuada de multiplicacao:\n");
    while (z<=k){ 
        op=i+(s*y);
        som= n*op;
        y++;
        z++;
        printf("%.2lf x %.2lf = %.2lf\n", n, op, som);
    }
    z=1;
    y=0;
    printf("Tabuada de divisao:\n");
    while (z<=k){ 
        op=i+(s*y);
        som= n/op;
        y++;
        z++;
        printf("%.2lf / %.2lf = %.2lf\n", n, op, som);
    }

    return 0;
}