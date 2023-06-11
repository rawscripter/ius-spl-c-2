// problem 11
#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b,&c);

    if((a+b) <= 80 && b > 0){
         printf("1) %d\n", 1);
    }else{
         printf("1) %d\n", 0);
    }

    if((a - b) == 0 || c != 0){
         printf("2) %d\n", 1);
    }else{
         printf("2) %d\n", 0);
    }

    if(a != b || (b < a) && c > 0){
         printf("3) %d\n", 1);
    }else{
        printf("3) %d\n", 0);
    }

    return 0;
}
