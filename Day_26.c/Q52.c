// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// Pattern with stars spaced irregularly as shown.

// */
#include <stdio.h>
int main(){
    int i, j;
    int stars = 1; 

    for ( i = 1; i<= 3; i++){
        for ( j = i; j <= stars; j++){
            printf("*\n");
        }
        printf("\n");
        stars +=2;
    }

    stars-= 4;
    for (i = 1; i <= 2; i++){
        for (j = 1; j <= stars; j++){
            printf("*\n");
        }
        printf("\n");
        stars -= 2;
    }
    return 0; 
}