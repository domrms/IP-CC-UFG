#include <stdio.h>

int main(){
    int i = 2;
    int op = 0;
    int n;

    scanf("%d", &n);
    if(n<0){
        printf("Numero invalido!\n");
        return 0;
        }

        if(n==0 || n<2){
        printf("NAO PRIMO\n");
        return 0;
        }

    while(i<=n/2){
        i++;
        while(n%i==0){
            op++;
            break;
            }
    }
        if(op==0){
            printf("PRIMO\n");
        } else
            printf("NAO PRIMO\n");

    return 0;

}