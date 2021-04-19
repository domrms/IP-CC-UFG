#include <stdio.h>
#include <math.h>

double raizesEq2Grau (double a, double b, double c);

int main(){
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);
    raizesEq2Grau(a, b, c);

    return 0;
}

double raizesEq2Grau (double a, double b, double c){

    double x1, x2;
    double delta;

    delta = b*b - 4*a*c;
    if( delta < 0 ) {
        printf("RAIZES IMAGINARIAS\n");
    } else if( delta == 0 ) {
        if(a!=0) x1 = -b/(2*a);
        else if( b!=0) x1 = -c/b;
        else x1 = 0;
        printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    } else {
        delta = sqrt(delta);

        if( a!=0 ) x1 = (-b + delta)/(2*a);
        else if(b!=0) x1 = -c/b;
        else x1 = 0;

        if( a!=0 )x2 = (-b - delta)/(2*a);
        else x2 = x1;       

        if( x2 < x1 ) {
            delta = x2;
            x2 = x1;
            x1 = delta;
        }

        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }

    return 0;
}