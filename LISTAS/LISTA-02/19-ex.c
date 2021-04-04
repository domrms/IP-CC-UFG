#include <stdio.h>
 
int main(){
    int num1, num2, num3, maior, menor, medio;
    char a1, a2, a3;
 
    scanf("%d %d %d\n", &num1, &num2, &num3);
    scanf("%c %c %c", &a1, &a2, &a3);
 
    if (num1>num2 && num2>num3){
        maior= num1, medio=num2, menor=num3;
    }else if (num1>num3 && num3>num2){
        maior= num1, medio=num3, menor=num2;
    }else if (num2>num1 && num1>num3){
        maior= num2, medio=num1, menor=num3;
    }else if (num2>num3 && num3>num1){
        maior= num2, medio=num3, menor=num1;
    }else if (num3>num1 && num1>num2){
        maior= num3, medio=num1, menor=num2;
    }else if (num3>num2 && num2>num1)
        maior= num3, medio=num2, menor=num1; 
 
     if((a1 == 'A') && (a2 == 'B') && (a3 == 'C')){
        printf ("%d %d %d", menor, medio, maior);
    }else if((a1 == 'A') && (a2 == 'C') && (a3 == 'B')){
        printf ("%d %d %d", menor, maior, medio);
    }else if((a1 == 'B') && (a2 == 'A') && (a3 == 'C')){
        printf ("%d %d %d", medio, menor, maior);
    }else if((a1 == 'B') && (a2 == 'C') && (a3 == 'A')){
        printf ("%d %d %d", medio, maior, menor);
    }else if((a1 == 'C') && (a2 == 'A') && (a3 == 'B')){
        printf ("%d %d %d", maior, menor, medio);
    }else if((a1 == 'C') && (a2 == 'B') && (a3 == 'A')){
        printf ("%d %d %d", maior, medio, menor);
    }
 
return 0;
}