#include <stdio.h>

int main (){
    int x, i = 1;
    int n, divisor, soma1, soma2;

    scanf("%d", &x);
    
    for (n = 2; i<=x; n++){        
        soma1 = 1;
        for (divisor = 2; divisor <= n/2; divisor++){            
            if (n % divisor == 0) soma1+=divisor; 
        }
        soma2 = 1;
        if (soma1 != n) for (divisor = 2; divisor <= soma1/2; divisor++){            
            if (soma1 % divisor == 0) soma2+=divisor; 
        }
        if (soma2 == n){
           if (soma2 == n && n<soma1){ 
            printf("(%d,%d)\n",n, soma1);
            i++;;
            }
        }
        
    }

     return 0;
    }
    
