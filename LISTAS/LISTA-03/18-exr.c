#include <stdio.h>

int main(){
    double i;
    double valoringresso, valorinicial, valorfinal;
    double v, n, l; //valor do ingresso, quantidade vendido e lucro obtido;
    double x = 0, y, w, k; //contador dos ingressos,contador de valores, contador n
    double lucromax, melhorv, melhori;


    scanf("%lf", &valoringresso);
    scanf("%lf", &valorinicial);
    scanf("%lf", &valorfinal);

    i=valorinicial;
    y=valoringresso;
    w=valoringresso-valorinicial;
    
    while (i<=valorfinal){
        while (y>=valorinicial){
            n=120+(50*w);
            v=valorinicial+x;
            l=(v*n)-(200+(n*0.05));
            x++; y--; w--;
            
            printf("V: %.2lf, N: %.0lf, L: %.2lf\n", v, n, l);

            if(l>lucromax){
            lucromax=l;
            melhorv=v;
            melhori=n;}
        }

        w=valorfinal-valoringresso;
        k=1;
        while (v<valorfinal && k<=w){
            n=120-(60*k); 
            v++;
            l=(v*n)-(200+(n*0.05));
            k++; 
            
            printf("V: %.2lf, N: %.0lf, L: %.2lf\n", v, n, l);

            if(l>lucromax){
            lucromax=l;
            melhorv=v;
            melhori=n;}
        }
        i++;      
    }

    printf("Melhor valor final: %.2lf\n", melhorv);
    printf("Lucro: %.2lf\n", lucromax);
    printf("Numero de ingressos: %.0lf\n", melhori);
        
    return 0;

}