#include <stdio.h>
 
int main(){
    int x;
    double p = 0, i = 0;
    double mp, mi;
    int dp = 0, di = 0;
 
    while (1){
        scanf("%d", &x);
        if(x==0) break;
        if(x%2==0){
        p=p+x;
        dp=dp+1;
        }else{
        i=i+x;
        di=di+1;}
    }
    if(p>0 && i>0){
        mp= (double) p/dp;
        mi= (double) i/di;
        printf("MEDIA PAR: %.6lf\n", mp);
        printf("MEDIA IMPAR: %.6lf\n", mi);}
    if (p==0 & i>0){
        mp=  p/1.0;
        mi= (double) i/di;
        printf("MEDIA PAR: %.6lf\n", mp);
        printf("MEDIA IMPAR: %.6lf\n", mi);}
    if (p>0 && i==0){
        mp= (double) p/dp;
        mi=  i/1.0;
        printf("MEDIA PAR: %.6lf\n", mp);
        printf("MEDIA IMPAR: %.6lf\n", mi);}
    if (p==0 && i==0){
        mp=  p/1.0;
        mi=  i/1.0;
        printf("MEDIA PAR: %.6lf\n", mp);
        printf("MEDIA IMPAR: %.6lf\n", mi);}
 
    return 0;
}