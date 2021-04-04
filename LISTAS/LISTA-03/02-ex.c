#include <stdio.h>

int main (){
    int i=1;
    int ntestes;
    double temperatura, conversao;

    scanf("%d", &ntestes);

    while (i<=ntestes){
        scanf("%lf", &temperatura);
        conversao= (5*(temperatura-32)/9);
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", temperatura, conversao);
        i=i+1;
    }

return 0;
}