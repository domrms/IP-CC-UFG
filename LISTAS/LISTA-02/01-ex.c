#include <stdio.h>

int main (){
    double n1, n2, n3, media;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    
    
    media= (n1 + n2 + n3) / 3;
    printf("MEDIA = %.2lf \n", media);

    if (media>=6){
        printf("APROVADO \n");
    }

    else 
        printf("REPROVADO \n");

    return 0;

}