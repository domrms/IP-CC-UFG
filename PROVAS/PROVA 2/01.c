#include <stdio.h>
 
int main(){
    int n;
    int d1 = 1, d2 = 1, i;
    int count = 0;
 
    scanf("%d", &n);

    for (d1=1; d1<=6; d1++){
        for (d2=1; d2<=6; d2++){
            if (d1+d2==n){
                if (d1!=d2){
                printf("D1: %d, D2: %d\n", d1, d2);
                count++;
                }
           }
        }
    }

    if (count==0){
        printf("Combinacao impossivel\n");
        return 0;
        }

    if (count>=1){
        printf("Ha %d possibilidades\n", count);
        return 0;
        }
 
    return 0;
}