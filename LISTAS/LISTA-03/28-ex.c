#include <stdio.h>

int main(){
    double sal_m, lim_ins, p_tv1, p_tv2;
    int mat, n_tv1, n_tv2;
    double desc_inss, sal_total, com_tv1, com_tv2, com_total, sal_bruto, sal_liquido, aux_imposto;

    scanf("%lf %lf %lf %lf", &sal_m, &lim_ins, &p_tv1, &p_tv2);

    while(1){
        scanf("%d %d %d", &mat, &n_tv1, &n_tv2);
        if(mat==0){break;}

        if(n_tv1>=10){
            com_tv1=(p_tv1*14)/100;
            }
        if(n_tv1<10){
            com_tv1=(p_tv1*13)/100;
            }
        if(n_tv2>=20){
            com_tv2=(p_tv2*13)/100;
            }
        if(n_tv2<20){
            com_tv2=(p_tv2*12)/100;
            }

        com_total=(com_tv1*n_tv1)+(com_tv2*n_tv2);
        sal_bruto=sal_m+com_total;
        
        desc_inss=(sal_bruto*8)/100;
        sal_total=sal_m+com_total-desc_inss;

        if(sal_total>lim_ins){
            aux_imposto=sal_total-lim_ins;
            aux_imposto=(aux_imposto*15)/100;
            sal_liquido=sal_total-aux_imposto;
        }
        if(sal_total<lim_ins){
            sal_liquido=sal_total;
        }

        printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", mat, sal_bruto, sal_liquido);

    }

    return 0;
}