#include <stdio.h>

int main(){
    int n;
    int i = 1;
    int graosb, graose, graos;

    scanf("%d", &n);
    
    graose=n*2*31;
    graosb=n*31;
    graos=graose+graosb+(2*n);

    printf("%d", graos);    

  return 0;
}