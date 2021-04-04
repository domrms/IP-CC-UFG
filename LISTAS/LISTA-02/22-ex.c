#include <stdio.h>

int main (){
    int i;
    double n1, n2, n3;

    scanf("%d", &i);
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

      if ( i==1) {
        if (n1 <= n2 && n1 <= n3 && n2 <= n3) 
            printf("%.2f %.2f %.2f", n1, n2, n3);
        else if (n1 <= n2 && n1 <= n3 && n3 <= n2) 
            printf("%.2f %.2f %.2f", n1, n3, n2);
        else if (n2 <= n1 && n2 <= n3 && n1 <= n3) 
            printf("%.2f %.2f %.2f", n2, n1, n3);
        else if (n2 <= n1 && n2 <= n3 && n3 <= n1) 
            printf("%.2f %.2f %.2f", n2, n3, n1);
        else if (n3 <= n1 && n3 <= n2 && n2 <= n1) 
            printf("%.2f %.2f %.2f", n3, n2, n1);
        else if (n3 <= n1 && n3 <= n2 && n1 <= n2) 
            printf("%.2f %.2f %.2f", n3, n1, n2);
    }
    if (i==2) {
        if (n1 <= n2 && n1 <= n3 && n2 <= n3) 
            printf("%.2f %.2f %.2f", n3, n2, n1);
        else if (n1 <= n2 && n1 <= n3 && n3 <= n2) 
            printf("%.2f %.2f %.2f", n2, n3, n1);
        else if (n2 <= n1 && n2 <= n3 && n1 <= n3) 
            printf("%.2f %.2f %.2f", n3, n1, n2);
        else if (n2 <= n1 && n2 <= n3 && n3 <= n1) 
            printf("%.2f %.2f %.2f", n1, n3, n2);
        else if (n3 <= n1 && n3 <= n2 && n2 <= n1) 
            printf("%.2f %.2f %.2f", n1, n2, n3);
        else if (n3 <= n1 && n3 <= n2 && n1 <= n2) 
            printf("%.2f %.2f %.2f", n2, n1, n3);
    }
    if (i==3) {
        if (n1 <= n2 && n1 <= n3 && n2 <= n3) 
            printf("%.2f %.2f %.2f", n2, n3, n1);
        else if (n1 <= n2 && n1 <= n3 && n3 <= n2) 
            printf("%.2f %.2f %.2f", n3, n2, n1);
        else if (n2 <= n1 && n2 <= n3 && n1 <= n3) 
            printf("%.2f %.2f %.2f", n1, n3, n2);
        else if (n2 <= n1 && n2 <= n3 && n3 <= n1) 
            printf("%.2f %.2f %.2f", n3, n1, n2);
        else if (n3 <= n1 && n3 <= n2 && n2 <= n1) 
            printf("%.2f %.2f %.2f", n2, n1, n3);
        else if (n3 <= n1 && n3 <= n2 && n1 <= n2) 
            printf("%.2f %.2f %.2f", n1, n2, n3);
    }

    return 0;

}