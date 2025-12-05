//QUESTION 2 
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
 #include <stdio.h>
 int main(){
    int a, b, sum, diff, prod, quo; 

    printf("Enter 1st no.: ");
    scanf("%d", &a);
    printf("Enter 2nd no.: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;

    printf( "Sum = %d\n", sum);
    printf("difference = %d\n", diff); 
    printf(" product = %d\n", prod);

    if(b != 0){
        quo = a / b; 
        printf("Quotien = %d \n", quo);
    }
    else {
        printf(" Division by zero is not allowed \n");
    }
    return 0;
 }