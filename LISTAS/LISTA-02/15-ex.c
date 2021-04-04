#include <stdio.h>
 
int main (){
    int cc, dr, rt; //conteúdo de carbono, dureza Rockwell e resistência à tração.
 
    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);
 
    
    if (cc<7)
    { if (dr>50)
    { if (rt>80000)
    {
        printf("ACO DE GRAU = 10\n");

    } else 

        printf("ACO DE GRAU = 9\n"); 

    } else 

        printf("ACO DE GRAU = 8\n");

    } else 
    
        printf("ACO DE GRAU = 7\n");
    
 
    return 0;
}



/*#include <stdio.h>
 
int main (){
    int cc, dr, rt; //conteúdo de carbono, dureza Rockwell e resistência à tração.
    int a, b, c, soma;
 
    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);
 
    //sitema de pontos
    if (cc<7)
    {
        a=1;
    } else 
        a=0;
 
    if (dr>50)
    {
        b=1;
    } else
        b=0;
 
    if (rt>80000)
    {
        c=1;
    } else 
        c=0;
 
        soma=a+b+c;
 
    if (soma==3)
    {
        printf("ACO DE GRAU = 10\n");
 
    } else if (soma==2){
 
        printf("ACO DE GRAU = 9\n");
 
    } else if (soma==1)
    {
        printf("ACO DE GRAU = 8\n");
    
    } else if (soma==0){
 
        printf("ACO DE GRAU = 7\n");
 
    } else
 
    return 0;
} */