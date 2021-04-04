#include <stdio.h>
#define fixoc 500.00
#define fixoi 800.00
 
int main (){
    int ccliente;
    float cons_agua, valorconta, aux;
    char t_consm;
 
    scanf("%d", &ccliente);
    scanf("%f", &cons_agua);
    getchar();
    scanf("%c", &t_consm);
 
    // CONSUMO RESIDENCIAL
    if(t_consm == 82){
 
        valorconta= 5 + (cons_agua * 0.05);
 
        printf("CONTA = %d \n", ccliente);
        printf("VALOR DA CONTA = %.2f \n", valorconta);;
        
        }else

        // CONSUMO COMERCIAL <=80

        if (t_consm == 67 && cons_agua <= 80){
        printf("CONTA = %d \n", ccliente);
        printf("VALOR DA CONTA = %.2lf \n", fixoc);
        } else 
            // CONSUMO COMERCIAL
            if (t_consm == 67){
            
            aux= cons_agua - 80;
            valorconta= (500 + (aux * 0.25));
 
            printf("CONTA = %d \n", ccliente);
            printf("VALOR DA CONTA = %.2f \n", valorconta);

            } else

                // CONSUMO COMERCIAL <=80

                if (t_consm == 67 && cons_agua <= 80)
                {
                printf("CONTA = %d \n", ccliente);
                printf("VALOR DA CONTA = %.2lf \n", fixoc);
                }   else

                            // CONSUMO INDUSTRIAL <=100

                            if (t_consm == 73 && cons_agua <= 100)
                            {
                            printf("CONTA = %d \n", ccliente);
                            printf("VALOR DA CONTA = %.2lf \n", fixoi);
        
                           }else 
                                // CONSUMO INDUSTRIAL
                                if (t_consm == 73){
                            
                                aux= cons_agua - 100;
                                valorconta= (800 + (aux * 0.04));
                
                                printf("CONTA = %d \n", ccliente);
                                printf("VALOR DA CONTA = %.2f \n", valorconta);

                                }       
 
                         return 0;
                        }
