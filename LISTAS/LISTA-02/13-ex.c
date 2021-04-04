#include <stdio.h>

int main (){
    int n1, n2, n3, n4;
    int soma;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    if (n1>n2 && n1>n3 && n1>n4 )
    {
        soma= n2 + n3 + n4;
        printf("%d\n", soma);

    } else if (n2>n1 && n2>n3 && n2>n4)
    {
        soma= n1 + n3 + n4;
        printf("%d\n", soma);

    } else if (n3>n1 && n3>n2 && n3>n4)
    {
        soma= n1 + n2 + n4;
        printf("%d\n", soma);

    } else  if (n1>n2 && n1>n3 && n1>n4)
    {
        soma= n2 + n3 + n4;
        printf("%d\n", soma);

    } else if (n4>n1 && n4>n2 && n4>n3)
    {
        soma= n1 + n2 + n3;
        printf("%d\n", soma);
    }
    

    return 0;
}