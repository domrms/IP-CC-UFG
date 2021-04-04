#include <stdio.h>

int main (){
    int i=2;
    int n, y;

    scanf("%d", &n);

    while (i<=n){
        y=i * i;
        printf("%d^2 = %d\n", i, y);
        i=i+2;
    }

    return 0;
}