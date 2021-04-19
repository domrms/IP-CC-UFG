#include <stdio.h>
#include <math.h>

void pbyte(char * byte){
    int d = 128;
    unsigned char n = *byte;
    while(d>0){
        if(n/d > 0) printf("1");
        else printf("0");
        n = n%d;
        d/=2;
    }
}

void print_bytes( const void * end_byte, int n ){
    int i;
    char *pc = end_byte;
    for(i=0; i<n; i++){
        pbyte(pc);
        printf(" ");
        pc++;
    }
    printf("\n");
}

int main(){

    unsigned char uc; unsigned short us; unsigned int ui;
    float f;
    double v;
    scanf("%lf", &v);
    uc = us = ui = f = v;
    
    print_bytes(&uc, sizeof(unsigned char));
    print_bytes(&us, sizeof(unsigned short));
    print_bytes(&ui, sizeof(unsigned int));
    print_bytes(&f, sizeof(float));
    print_bytes(&v, sizeof(double));

    return 0;
}