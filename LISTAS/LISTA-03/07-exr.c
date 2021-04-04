#include <stdio.h>

int main(){
    int mt;
    double n1, n2, n3, n4, n5, n6, n7, n8, l1, l2, l3, l4, l5, tf, pa;
    double mp, ml, mf;

    while (mt>=0){

        scanf("%d", &mt); //matricula
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8); //nota das provas
        scanf("%lf %lf %lf %lf %lf", &l1, &l2, &l3, &l4, &l5); //nota das listas
        scanf("%lf", &tf); //nota trabalho final
        scanf("%lf", &pa); //presença aluno

        if (mt==-1){
            break;
        }
        
        mp= (n1+n2+n3+n4+n5+n6+n7+n8)/8;
        ml= (l1+l2+l3+l4+l5)/5;
        mf=(mp*0.7)+(ml*0.15)+(tf*0.15);
        printf("Matricula: %d, ", mt);

        if (mf>=6.0 && pa>=96.0){
            printf("Nota Final: %.2lf, Situacao Final: APROVADO\n", mf);}
        if (mf<6.0 && pa>=96.0){
            printf("Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", mf);}
        if (mf>=6 && pa<96.0){
            printf("Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", mf);}
        if (mf<6.0 && pa<96.0){
            printf("Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", mf);}
            
    }
    
    return 0;

}