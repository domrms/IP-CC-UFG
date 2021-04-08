#include <stdio.h>
 
int main(){
    
    int x, y, n;
 
    scanf("%d", &n);
 
    for(x = 0; x <= n; x++){
        for (y = 0; y <= n; y++){
            if(x <= y ){
                if(x * y == 1 || (x * y) % n == 1){
                printf("(%d,%d)\n", x, y);
                }
            }
        }
        
    }
 
    return 0;
}