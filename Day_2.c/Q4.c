// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/ 
#include <stdio.h>
#include <math.h>
int main(){
    int r, A, P;
    printf("Enter Radius: ");
    scanf("%d", &r);

    A = 3.14 * r * r;
    P = 2 * 3.14 * r;

    printf("Area:%d \n", A);
    printf("Perimeter:%d \n", P );

return 0;
}