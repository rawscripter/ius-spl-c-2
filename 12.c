// problem 12
#include <stdio.h>
#include <math.h>

int main(){

 int a,b,c;
    float x,y;

    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b,&c);

    x = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    y = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}
