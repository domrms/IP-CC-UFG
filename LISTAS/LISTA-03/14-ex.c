#include <stdio.h>

int main (){
    int n, j;
    int i;
    int nf = 1;
    scanf("%d", &n);

    if(n<2){
        printf("Campeonato invalido!\n");
    } 

    for(i=1;i<=n-1;i++) { 
        for(j=i+1;j<=n;j++) {   
            printf("Final %d: Time%d X Time%d\n", nf, i, j);
            nf++;
        }
    }
    
    return 0;
}