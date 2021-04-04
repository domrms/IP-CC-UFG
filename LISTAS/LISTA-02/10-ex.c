#include <stdio.h>
 
int main (){
    int n;
    int m, c, d, u, m1, c1, d1;
 
    scanf("%d", &n);
 
    if (n<1 || n>9999)
    {
        printf("Numero invalido! \n");
        
        return 0;
    }

    m = n/1000;
    c = n%1000/100;
    d = n%100/10;
    u = n%10;
    m1= m*1000;
    c1= c*100;
    d1= d*10;
 
    printf("(");
    if(m>0) printf("quarta");
    else if(c>0) printf("terceira");
    else if(d>0) printf("segunda");
    else printf("primeira");
    printf(" ordem) %d =", n);

    if(m>0) {
        printf(" %d unidade", m);
        if(m>1) printf("s");
        printf(" de milhar");
    }

    if(c>0) {
        if(m>0) printf(" +");
        printf(" %d centena", c);
        if(c>1) printf("s");
    }

    if(d>0) {
        if(m>0||c>0) printf(" +");
        printf(" %d dezena", d);
        if(d>1) printf("s");
    }

    if(u>0) {
        if(m>0||d>0||c>0) printf(" +");
        printf(" %d unidade", u);
        if(u>1) printf("s");
    }
    printf(" =");

    if(m>0) printf(" %d", m1);
    if(c>0) {
        if(m>0) printf(" +");
        printf(" %d", c1);
    }
    if(d>0) {
        if(m>0||c>0) printf(" +");
        printf(" %d", d1);
    }
    if(u>0) {
        if(m>0||c>0||d>0) printf(" +");
        printf(" %d", u);
    }

    printf("\n");

    return 0;

    }
