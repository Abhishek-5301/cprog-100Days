// //Q Write a program to check if a number is a strong number;
#include <stdio.h>
int main(){
    int x, sum = 0, factorial = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &x);

    int original = x;

    while( x != 0){
        digit = x % 10;
        factorial = 1;

        for( int i = 1; i <= digit; i ++){
            factorial *= i;
        }
        sum += factorial;
        x /= 10;
    }

    if( sum == original){
        printf("STRONG NUMBER \n");
    }
    else{
        printf("NOT A STRONG NUMBER");
    }
    return 0;
}



