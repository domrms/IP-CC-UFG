#include <stdio.h>

int main (){
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a < b)
    {
        if (b < c)
        {
            printf("%.2lf, %.2lf, %.2lf \n", a, b, c);
        } else
        if (a < c)
        {
            printf("%.2lf, %.2lf, %.2lf \n", a, c, b);
        } else 

            printf("%.2lf, %.2lf, %.2lf \n", c, a, b);
        
        
    } else if (b > c)
    {
        printf("%.2lf, %.2lf, %.2lf \n", c, b, a);

    } else if (b < c)
    {
        if (a < c)
        {
            printf("%.2lf, %.2lf, %.2lf \n", b, a, c);
        }
        else 

        printf("%.2lf, %.2lf, %.2lf \n", b, c, a);
        
    }

    return 0;
}