#include <stdio.h>

int main (){
    int m;
    float ht, v, s;

    while (1){
        scanf("%d %f %f[^\n]", &m, &ht, &v);
        getchar();
        if (m==0) break;
        s=ht*v;
        printf("%d %.2lf\n",m, s);

    }

    return 0;
}