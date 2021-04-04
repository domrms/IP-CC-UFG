#include <stdio.h>

int main(){
    int i=1;
    int aux=0;
    int vi, r, n, sn, soma;
    scanf("%d %d %d", &vi, &r, &n);

    while (i<=n){
        sn= vi + r*aux;
        soma=soma+sn;
        aux=aux+1;
        i=i+1;
    }
    printf("%d", soma);
      
    return 0;
}