#include <stdio.h>

int main(){
    double n;
    int num, den, i;

    scanf("%lf", &n);

    num=n*10000000;
    den=10000000;

    for (i=2;i<=num;i++){
        while (num%i==0 && den%i==0){
            num=num/i;
            den=den/i;
        }
    }
    
    printf("%d/%d\n", num, den);

    return 0;
}