//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(){
    int n, product = 1, i, even;
    printf("Enter the number: ");
    scanf("%d", &n);

    for( i = 2; i <= n; i+= 2){
        product *= i;
    }
    printf("PRODUCT; %d \n", even);
    return 0;
}