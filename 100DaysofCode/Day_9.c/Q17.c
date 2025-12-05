//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, D, x1, x2, realPart, imagPart;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    if(D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Roots: %.2lf and %.2lf\n", x1, x2);
    }
    else if(D == 0) {
        x1 = x2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Roots: %.2lf and %.2lf\n", x1, x2);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Roots are complex.\n");
        printf("Roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }
    return 0;
}


      