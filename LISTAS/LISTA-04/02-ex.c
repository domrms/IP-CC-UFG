#include <stdio.h>

int fibonacci( int t1, int t2, int n);

int main (){
    int t1, t2, n;
    int f;

    scanf("%d %d %d", &t1, &t2, &n);

    f=fibonacci(t1, t2, n);
    printf("%d\n", f);

    return 0;
}

int fibonacci( int t1, int t2, int n){
    int fib;
    int i;
    int soma= 0;

    for (i=3; i<=n; i++){
        soma=t1+t2;
        t1=t2;
        t2=soma;
    }

    return t2;
}