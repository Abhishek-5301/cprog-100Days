//Q. Write a program to take anumber as input adn pint its equivalent binary representation.
#include <stdio.h>
#include <math.h>
int main(){
    int n, remainder, binary = 0, place = 1, orignal;
    printf("Enter the number: ");
    scanf("%d", &n);

    orignal = n;

    while( n > 0){
        remainder = n % 2;
        binary = binary  + remainder * place;
        place = place * 10;
        n = n / 2;
    }
printf ( " the binary for %d : %d", orignal, binary);
   
    return 0;
}

