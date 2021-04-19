#include <stdio.h>

    unsigned long int fat (unsigned int n);

    int main(){
    unsigned int n;
    unsigned long int f;

    scanf("%d", &n);  

    f= fat(n);

    printf("%d! = %lu\n", n, f);

  return 0;

}

unsigned long int fat( unsigned int n){

    unsigned long int f = 1;

        while (n>1){
            f = f * n;
            n--;
        }

    return f;
}