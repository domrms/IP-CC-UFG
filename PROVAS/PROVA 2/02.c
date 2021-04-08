#include <stdio.h>

int main(){
    int m, n, s;
    int x, y, z;
    

    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &s);

    for (x=1; x<=m; x++){
        for (y=1; y<=n; y++){ 
            if(x==y || fabs(x-y) <= s){ 
            if (x < 10 && y < 10){
                printf("( %2.d, %2.d)", x, y); 

            } else if (x < 10 && y >= 10){
                printf("(%2.d,%2.d)", x, y);

            } else if (x >= 10 && y < 10){
                printf("(%2.d,%2.d)", x, y);

            } else if (x >= 10 && y >= 10){
                printf("(%2.d,%2.d)", x, y);
            }
                } else 
                printf(".......");
        }
        printf("\n");
    }

    return 0;

}

