#include <stdio.h>

int main(){
    int i=1;
    int x, y, r;

    scanf("%d %d[^\n]", &x, &y);

    if (x%2!=0){
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    } else
        while (i<=y){
            r=x;
            printf("%d ", r);
            x=x+2;
            i=i+1;
        } 
        printf(" \n");
    return 0;
}