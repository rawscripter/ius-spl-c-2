// problem 7
#include <stdio.h>

int main(){

    int x = 123;
    float y = 123.125;

    printf("Assignment: %f assigned to an int produces %d\n", y, x=y);
    printf("Assignment: %d assigned to a float produces %f\n", x, y=x);
    printf("Type Casting: (float) %d produces %f\n", x, (float)x);
    printf("Type Casting: (int) %f produces %d\n", y, (int)y);


    return 0;
}
