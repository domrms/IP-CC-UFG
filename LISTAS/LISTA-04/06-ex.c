#include <stdio.h>

double r0=1;
double raiz(double n);
double absoluto(double n);


int main() {
    
    double n, e;
    double err;

    scanf("%lf %lf", &n, &e);

    err = absoluto(n-raiz(n)*raiz(n));

    while(err>e){
        raiz(n);
        err = absoluto(n-raiz(n)*raiz(n));
        printf("r: %.9lf, err: %.9lf\n", raiz(n), err);
        r0 = raiz(n);
    }
    
    return 0;
}

double raiz(double n){
    double r;

    r = (r0+n/r0)/2;

    return r;

}

double absoluto(double n){
  if (n >= 0.0)
    return n;
  else
    return -n;
}


