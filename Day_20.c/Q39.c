// Q Write a program to find the product of odd digits of number. 
#include <stdio.h>
int main(){
    int x, remainder, product = 1, foundOdd = 0;
    printf("Enter number: ");
    scanf("%d", &x);

    while (x > 0) {
        remainder = x % 10;           // get last digit
        if (remainder % 2 != 0) {     // check if odd
            product *= remainder;
            foundOdd = 1;
        }
        x = x / 10;   // move to next digit
    }

    // If no odd digit found, product should be 1
    printf("Product: %d", product);
    return 0;
}

