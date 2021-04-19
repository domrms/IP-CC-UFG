#include <stdio.h>

int main(){
    int n, m;
    int i, j;
    int num;

    scanf("%d", &n);
    int v[n];

    for (i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &m);
    
    for (j=0; j<m; j++){
        scanf("%d", &num);
        for (i=0; i<n; i++){
        if (num==v[i]){
            printf("ACHEI\n");
            break;
            }
        }
        if(i==n) printf("NAO ACHEI\n");
    }



    return 0;
}