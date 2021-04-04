#include <stdio.h>
#include <math.h>
 
int main() {
    float a, b, c;
    float area, peri;
    scanf("%f %f %f", &a, &b, &c);
 
    if (fabs(b-c)<a && a<fabs(b+c)) {
        if (fabs(a-c)<b && b<fabs(a+c))
        if (fabs(a-b)<c && c<fabs(a=b))
        peri=a+b+c;
        
        printf("Perimetro = %.1f", peri);
    }
 
    else {
        area=((a+b)*c)/2;
        printf("Area = %.1f", area);
    }
 
return 0;
}