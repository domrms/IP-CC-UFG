#include <stdio.h>

int main(){
    double m, n;
    double x, y;
    

    scanf("%lf", &m);
    scanf("%lf", &n);

    for (x=2; x<=m; x++){
        for (y=1; y<=n; y++){ 
            if (x>y){
                printf("(%.0lf,%.0lf)", x, y);
                if(y < x-1 && y <= n-1){
                    printf("-");
                }
            }
        }
        printf("\n");
    }

    return 0;

}
