#include <stdio.h>

int separaDigitos (int n);

int main(){
    int n;

    scanf("%d", &n);
    separaDigitos(n);

    return 0;

}

int separaDigitos (int n){
    int c;
    int d;
    int u;

    c= n/100;
    d= (n/10) - (10*c);
    u= n - (c*100) - (d*10);

    printf("%d%d%d\n", u, d, c);

    return 0;
}