//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/

#include <stdio.h>
int main(){
    int x;
    printf("Enter the month number: ");
    scanf("%d", &x);

    switch(x){
    case 1: printf("Month- JAN, DAYS- 31");
    break;
    
    case 2: printf("Month - FEB, 28");
    break;

    case 3: printf(" MAR, 31" );
    break;

    case 4: printf(" APR, 30");
    break;

    case 5: printf(" May,31 ");
    break;

    case 6: printf("June, 30");
    break;

    case 7: printf("July, 31");
    break;

    case 8: printf(" AUG,31 ");
    break;

    case 9: printf(" Sep,30 ");
    break;

    case 10: printf("Oct, 31");
    break;

    case 11: printf("Nov, 30");
    break;

    case 12: printf("Dec, 31");
    break;

    default: printf("Invalid value");
    }
    return 0;

}

