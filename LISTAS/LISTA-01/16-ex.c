#include <stdio.h>
#include <math.h>

int main (){

int n, inv, aux;

scanf("%d", &n);

if (n!=0 && n%10!=0 || n%100!=0);
{
    inv= n%10;
    printf("%d", inv);

    inv= n%100;
    aux= inv/10;
    printf("%d", aux);

    inv= n / 100;

     printf("%d \n", inv);

}

    return 0;
}