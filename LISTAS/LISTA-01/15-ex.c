#include <stdio.h>
 
int main(){
    int numero, q;
    scanf("%d", &numero);
 
    if (numero >= 0 && numero <= 255){
        q= numero / 128; printf("%d", q); numero= numero % 128;
        q= numero / 64; printf("%d", q); numero= numero % 64;
        q= numero / 32; printf("%d", q); numero= numero % 32;
        q= numero / 16; printf("%d", q); numero= numero % 16;
        q= numero / 8; printf("%d", q); numero= numero % 8;
        q= numero / 4; printf("%d", q); numero= numero % 4;
        q= numero / 2; printf("%d", q); numero= numero % 2;
 
        printf("%d \n", numero);
 
    }
    
    else 
    printf("Numero invalido!\n");
 
    
    return 0;
}