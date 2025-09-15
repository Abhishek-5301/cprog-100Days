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

// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

// int main(){
//     int marks;
//     printf("Enter numbers: ");
//     scanf("%d", &marks);

//     if(marks >= 50 && marks < 60){
//         printf("Your grade is D");
//     }
//     else if (marks>=60 && marks<70){
//         printf("Your grade is C \n");
//     }
//     else if(marks>=70 && marks<80){
//         printf("Your grade is B\n");
//     }
//     else if(marks>= 80 && marks<100){
//         printf("Your grade is A \n");
//     }

//     else if ( marks< 0 || marks>100){
//         printf("Invalid Output");
//     }

//     return 0;
// }
      