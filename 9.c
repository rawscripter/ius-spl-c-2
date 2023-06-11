// problem 9
#include <stdio.h>

int main(){

    int a,b,c,x,y,z;

    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b,&c);


    x = a - b / 3 + c * 2 - 1;
    y = a - (b/(3+c) * 2) - 1;
    z = a - ((b/3) + c * 2) - 1;


    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);


    return 0;
}
