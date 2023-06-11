// problem 6
#include <stdio.h>

int main(){

    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Multiplied value x *= y: %d\n", x*=y);
    printf("Divided value x /= y: %d\n", x/=y);

    return 0;
}
