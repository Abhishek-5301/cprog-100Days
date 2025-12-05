//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>
#include <math.h>
int main(){
    int a;
        printf("Enter number: ");
    scanf("%d", &a);

    if(a != 0){
      if ( a > 0){
        printf(" number is positive");
      }
      else{
        printf("The number is negative");
     }
    }
    else{
        printf("The number is 0");
    }
}
