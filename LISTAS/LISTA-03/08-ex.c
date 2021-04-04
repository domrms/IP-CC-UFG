#include <stdio.h>

int main (){
    int ano=0;
    int p1, p2;

    scanf("%d", &p1);
    scanf("%d", &p2);

    while (p1<p2){

        p1 = p1+p1*0.03;
        p2 = p2+p2*0.015;
        ano++;
        }
        
        printf("ANOS = %d\n", ano);

    return 0;
}