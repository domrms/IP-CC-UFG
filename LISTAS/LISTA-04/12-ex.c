#include <stdio.h>

double compute_pi( int n );

int main(){
int n;
double f;

    scanf("%d", &n);

    f=compute_pi(n);
    printf("%.12lf\n", f);

    return 0;
}

double compute_pi( int n ){
    double resultado = 1;
    int i = 1, j = 0;
    int atual = 0;

    while(j!=n){
    if (atual == 0){
      resultado = resultado * (2 * i) / ((2 * i) - 1);
      atual = 1;
    }
    else{
      resultado = resultado * (2 * i) / ((2 * i) + 1);
      atual = 0;
      i++;
    }
    j++;
  }
  return resultado * 2;
}
