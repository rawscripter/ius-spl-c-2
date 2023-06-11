// problem 8
#include <stdio.h>

int main(){

    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Maximum value: %d\n", x>y?x:y);


    return 0;
}
