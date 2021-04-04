#include <stdio.h>

int main(){
    int n;
    int n1, n2, n3, n4, n5; //casa decimal

    scanf("%d", &n);

    if (n > 99999)
    {
        printf("NUMERO INVALIDO\n");

    } else if (n<1000){ //3casas
            n1= n/100;
            n2= (n/10) - (10*n1);
            n3= n - (n1*100) - (n2*10);

            if (n1==n3)
            {
                printf("PALINDROMO\n");
            } else 

                printf("NAO PALINDROMO\n");
            
    }else if (n<10000) //4casas
            {
                n1= n/1000;
                n2= (n/100) - (10*n1);
                n3= (n/10) - (n1*100) - (n2*10);
                n4= (n1*1000) - (n2*100) - (n3*10) - n;

                if (n1==n4 || n2==n3)
                {
                    printf("PALINDROMO\n");
            } else 

                printf("NAO PALINDROMO\n");
                           
    }else if (n<100000) //5casas
    {
                n1= n/10000;
                n2= (n/1000) - (10*n1);
                n3= (n/100) - (n1*100) - (n2*10);
                n4= (n/10) - (n1*1000) - (n2*100) - (n3*10);
                n5= n - (n1*10000) - (n2*100) - (n3*100) - (n4*10);

                if (n1==n5 || n2==n4)
                {
                    printf("PALINDROMO\n");
            } else 

                printf("NAO PALINDROMO\n");
    }

    return 0;
}