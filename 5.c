// problem 5
#include <stdio.h>

int main(){

    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Incremented value x += y: %d\n", x+=y);
    printf("Decremented value x -= y: %d\n", x-=y);



    return 0;
}
