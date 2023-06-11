// problem 4
#include <stdio.h>

int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Increment X++: %d\n", x++);
    printf("Decrement X--: %d\n", x--);

    printf("Increment ++X: %d\n", ++x);
    printf("Decrement --X: %d\n", --x);

    return 0;
}
