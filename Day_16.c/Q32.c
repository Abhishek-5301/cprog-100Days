//Q. Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, remainder, reversed = 0, original;
    printf("Enter the number: ");
    scanf("%d", &n);

    original = n;

    while ( n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n =  n / 10;
    }
    printf(" REVERSED: %d \n", reversed);

    if( reversed == original ){
        printf("PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
}