// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
#include <math.h>
int main(){
    int F, C;
    printf("Enter temp in Cel: ");
    scanf("%d", &C);

    F = (C * 9/5) + 32;
    printf("Temp ( in F):%d", F);
    return 0;
}

