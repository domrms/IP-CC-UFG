#include <stdio.h>

int main(){
    int n, i, k;
    int result = 0; 

    while(1){
        scanf("%d", &n);
        if(n>0 && n<1001) break;
    }

    int v[n]; 
    for (i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &k);
    for(i=0; i<n; i++){
        if(v[i]>=k) result++;
    }

    printf("%d\n", result);

    return 0;
}