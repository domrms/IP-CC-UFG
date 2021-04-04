#include <stdio.h>
 
int main (){
    double bruto, mensalidade, vfinal;
    int qpessoas;
    char x;
 
    scanf("%lf", &bruto);
    scanf("%d", &qpessoas);
    getchar();
    scanf("%c", &x);
    scanf("%lf", &mensalidade);
 
   if (x=='A' || x=='E'){
        if (bruto<=1800){
            if (x=='E'){
            vfinal=mensalidade*0.25*qpessoas;
            if (bruto-vfinal<bruto*0.30){
            printf("DESCONTO NAO AUTORIZADO\n");
            } else
            printf("ENFERMARIA %.2lf\n", vfinal);
            } else if (x=='A'){
            vfinal=mensalidade*0.30*qpessoas;
            if (bruto-vfinal<bruto*0.30){
            printf("DESCONTO NAO AUTORIZADO\n");
            } else
            printf("APARTAMENTO %.2lf\n", vfinal);}
 
        }else if (bruto>1800 && bruto<=5000){ 
            if (x=='E'){
            vfinal=mensalidade*0.28*qpessoas;
            if (bruto-vfinal<bruto*0.30){
            printf("DESCONTO NAO AUTORIZADO\n");
            } else
            printf("ENFERMARIA %.2lf\n", vfinal);
            } else if (x=='A'){
            vfinal=mensalidade*0.35*qpessoas;
            if (bruto-vfinal<bruto*0.30){
            printf("DESCONTO NAO AUTORIZADO\n");
            } else
            printf("APARTAMENTO %.2lf\n", vfinal);}
 
        } else if (bruto>5000){
            if (x=='E'){
            vfinal=mensalidade*0.31*qpessoas;
            if (bruto-vfinal<bruto*0.30){
            printf("DESCONTO NAO AUTORIZADO\n");
            } else
            printf("ENFERMARIA %.2lf\n", vfinal);
            }else if (x=='A'){
            vfinal=mensalidade*0.40*qpessoas;
            if (bruto-vfinal<bruto*0.30){
            printf("DESCONTO NAO AUTORIZADO\n");
            } else
            printf("APARTAMENTO %.2lf\n", vfinal);}
            }
            
            } else 
        
            printf("TIPO DE PLANO INVALIDO\n");
        
   
            return 0;
 
            }
    
   