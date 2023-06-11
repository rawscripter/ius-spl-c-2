// problem 14
#include <stdio.h>
#include <math.h>

int main(){

    float x,c;
    int a,b;


    printf("Enter the value of x: ");
    scanf("%f", &x);

    a = ceil(x);
    b = floor(x);
    c = (float)fabs(x);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %0.1f\n", c);


    return 0;
}
