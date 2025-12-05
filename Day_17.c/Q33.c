//Q. Write a program to check whether a number is armstrong or not.
#include <stdio.h>
#include <math.h>
int main(){
    int n, remainder, sum = 0, original, digit;
    printf("Enter the number: ");
    scanf("%d", &n);

    original = n;

int temp = n;
while( temp != 0){
    digit++;
    temp /= 10;
}    
    temp = n;
    while( n != 0){
        remainder = temp % 10;
        sum = pow(remainder, digit) + sum;
        temp = temp / 10;
    }


    if( sum == original){
        printf("ARMSTRONG NUMBER");
    }
    else{
        printf("NOT ARMSTRONG NUMBER");
    }
}

