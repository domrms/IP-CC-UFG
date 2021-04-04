#include <stdio.h>
int main() {
    int n1, n2, n3;
    int mmc;
    int div;
    scanf("%d %d %d", &n1, &n2, &n3);
    mmc = 1;
    while(n1>1 || n2>1 || n3>1) {
        div = 2;
        while( n1%div!=0 && n2%div!=0 && n3%div!=0 ) div++;
        mmc = mmc * div;
        printf("%d %d %d :%d\n", n1, n2, n3, div);
        if( n1%div==0) n1/=div;
        if( n2%div==0) n2/=div;
        if( n3%div==0) n3/=div;
    }
    printf("MMC: %d\n", mmc);
    return 0;
}
