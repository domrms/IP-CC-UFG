#include <stdio.h>
#define rendabrasil 1405.5

int main (){
    double renda, rendapercapita;
    int qfamilia, tescola, ppi;

    scanf("%lf" "%d" "%d" "%d", &renda, &qfamilia, &tescola, &ppi);

    rendapercapita= renda/qfamilia;
    
    if (rendapercapita<=rendabrasil && tescola==2) {
        if (ppi==1 || ppi==2 || ppi==3) printf("ALUNO COTISTA (L2)");
        else printf("ALUNO COTISTA (L1)");
    }

    if (rendapercapita>rendabrasil && tescola==2) {
        if (ppi==1 || ppi==2 || ppi==3) printf("ALUNO COTISTA (L4)");
        else printf("ALUNO COTISTA (L3)");
    }

    else if (tescola==1) printf("ALUNO NAO COTISTA");
 
return 0;
}



