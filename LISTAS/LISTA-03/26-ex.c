#include <stdio.h>

int main(){
    int n;
    int i;
    int c;

    scanf("%d", &n);
    printf("%d = 1", n);

    for(i=2, c=2; i<n; i++){
        if(n%i==0){
            printf(" + %d", i);
            c=c+i;
        }
    }
        c=c-1;
        if(c==n){
            printf(" = %d (NUMERO PERFEITO)\n", c);
        } else {
    printf(" = %d (NUMERO NAO E PERFEITO)\n", c);
        }

    return 0;
}