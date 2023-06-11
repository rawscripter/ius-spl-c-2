// problem 13
#include <stdio.h>
#include <math.h>

int main(){

   int x;
    float y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    y = 2 * pow(cos(x), 2) - sqrt(3) * sin(x) + sin(x/2);

    printf("y = %f\n", y);

    return 0;
}
