#include <stdio.h>

int main () {
    int n1, n2, n3, n4, n5, maior, menor, ordem;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5) {
        menor=n1;
    }
    else if (n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5) {
        menor=n2;
    }
    else if (n3<=n1 && n3<=n2 && n3<=n4 && n3<=n5) {
        menor=n3;
    }
    else if (n4<=n1 && n4<=n2 && n4<=n3 && n4<=n5) {
        menor=n4;
    }
    else if (n5<=n1 && n5<=n2 && n5<=n3 && n5<=n4) {
        menor=n5;
    }


    if (n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5) {
        maior=n1;
    }
    else if (n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5) {
        maior=n2;
    }
    else if (n3>=n1 && n3>=n2 && n3>=n4 && n3>=n5) {
        maior=n3;
    }
    else if (n4>=n1 && n4>=n2 && n4>=n3 && n4>=n5) {
        maior=n4;
    }
    else if (n5>=n1 && n5>=n2 && n5>=n3 && n5>=n4) {
        maior=n5;
    }

    if (n1>n2 && n2>n3 && n3>n4 && n4>n5) {
        printf("MENOR: %d, MAIOR: %d\nORDENADO DECRESCENTE", menor, maior);
        return 0;
    }
    else if (n1<n2 && n2<n3 && n3<n4 && n4<n5) {
        printf("MENOR: %d, MAIOR: %d\nORDENADO CRESCENTE", menor, maior);
        return 0;
    }
    else printf("MENOR: %d, MAIOR: %d\nDESORDENADO", menor, maior);





return 0;
}