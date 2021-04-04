#include <stdio.h>

int main(){
    int x, y;

    scanf("%d", &x);

    if (x < 1)
    {
        printf("Y = %d \n", x);

    } else if (x == 1)
    {
        printf("Y = 0 \n", x);

    } else if (x > 1)
    {
        y= x * x;
        printf("Y = %d \n", y);
    }
    
    

    

    return 0;
}