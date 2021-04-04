#include <stdio.h>

int main(){
    int i = 1;
    int n, n1, n2;
    int c1, d1, u1, c2, d2, u2;

    scanf("%d", &n);

    while(i<=n){
    scanf("%d %d", &n1, &n2);
    c1= n1/100;
    d1= (n1/10) - (10*c1);
    u1= n1 - (c1*100) - (d1*10);
    c2= n2/100;
    d2= (n2/10) - (10*c2);
    u2= n2 - (c2*100) - (d2*10);

    if(u1==u2 && d1==d2){
        if(c1>c2){printf("%d%d%d\n", u1, d1, c1);}
        if(c2>c1){printf("%d%d%d\n", u2, d2, c2);}
    }
    if(u1==u2){
        if(d1>d2){printf("%d%d%d\n", u1, d1, c1);}
        if(d2>d1){printf("%d%d%d\n", u2, d2, c2);}
    }
    if(u1>u2){printf("%d%d%d\n", u1, d1, c1);}
    if(u2>u1){printf("%d%d%d\n", u2, d2, c2);}

    i++;
    }

    return 0;
}