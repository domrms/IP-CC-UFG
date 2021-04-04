#include <stdio.h>

int main() {
    
    double n, e;
    double r = 1;
    double err;

    scanf("%lf %lf", &n, &e);

    err = (n-r*r);
    if( err < 0 ) err = -err;

    while( err>e ) {

        r = (r+n/r)/2;
        err = (n-r*r);
        if( err < 0 ) err = -err;

        printf("r: %.9lf, err: %.9lf\n", r, err);
        

    }

    return 0;
}