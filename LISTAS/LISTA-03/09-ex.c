#include <stdio.h>

    int main(){
    int fat=1;
    int n, n2;

    scanf("%d", &n);
    n2=n;

    if(n2==0){
        fat=1;
    }else{
        while (n2>1){
            fat = fat * n2;
            n2--;
        }
    }
        
    printf("%d! = %d\n", n, fat);

  return 0;

}