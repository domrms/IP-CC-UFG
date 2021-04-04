#include <stdio.h>
#include <math.h>

int main(){
    double l1, l2, l3, T, area;

    scanf("%lf", &l1);
    scanf("%lf", &l2);
    scanf("%lf", &l3);

    T= (l1 + l2 + l3) / 2 ;
    area= (sqrt(T * (T - l1) * (T - l2) * (T - l3)));

    printf("A AREA DO TRIANGULO E = %.2lf \n", area);

    return 0;
}