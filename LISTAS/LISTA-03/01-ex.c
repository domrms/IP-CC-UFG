#include <stdio.h>

int main(){
    int i=1;
    int ntestes;
    double npessoas, ipopular, igeral, iarquibancada, icadeiras;
    double vpopular, vgeral, varquibancada, vcadeiras, renda;

    scanf("%d", &ntestes);
   
    while (i<=ntestes){
        scanf("%lf" "%lf" "%lf" "%lf" "%lf", &npessoas, &ipopular, &igeral, &iarquibancada, &icadeiras);
        vpopular=(ipopular*npessoas)/100;
        vgeral=((igeral*npessoas)/100)*5;
        varquibancada=((iarquibancada*npessoas)/100)*10;
        vcadeiras=((icadeiras*npessoas)/100)*20;
        renda=vpopular+vgeral+varquibancada+vcadeiras;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda); 
        i=i+1; 
    }
    return 0;
}