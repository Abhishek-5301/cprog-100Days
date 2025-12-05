//Q29: Write a program to calculate the factorial of a number.


#include<stdio.h>
#include<math.h>
int main(){
    int n, i, factorial = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    for( i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    printf("Factorial of %d: %d", n, factorial);
    return 0;
}

