//Q Write a program to check if a number is a perfect number. 
#include <stdio.h>
#include <math.h>
int main(){
    int x, divisor = 0, original;
    printf("Enter a number: ");
    scanf("%d", &x);

    original = x;

    for( int i = 1; i < x; i++ ){
        if( x % i == 0){
            divisor += i;
        } 

    }
    if( divisor == original){
        printf("PERFECT NUMBER \n");
    }
    else{
        printf("NOT A PERFECT NUMBER");
    }
    return 0;
}