// problem 3
#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("X = %f\n", (3.31 * a*a + 2.01 * b*b*b) / (7.16 * b*b + 2.01 * a*a*a));

    return 0;
}
