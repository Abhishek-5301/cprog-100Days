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

// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter the month number: ");
//     scanf("%d", &x);

//     switch(x){
//     case 1: printf("Month- JAN, DAYS- 31");
//     break;
    
//     case 2: printf("Month - FEB, 28");
//     break;

//     case 3: printf(" MAR, 31" );
//     break;

//     case 4: printf(" APR, 30");
//     break;

//     case 5: printf(" May,31 ");
//     break;

//     case 6: printf("June, 30");
//     break;

//     case 7: printf("July, 31");
//     break;

//     case 8: printf(" AUG,31 ");
//     break;

//     case 9: printf(" Sep,30 ");
//     break;

//     case 10: printf("Oct, 31");
//     break;

//     case 11: printf("Nov, 30");
//     break;

//     case 12: printf("Dec, 31");
//     break;

//     default: printf("Invalid value");
//     }
//     return 0;

// }

// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

//*/

#include <stdio.h>
#include <math.h>
int main(){
    float cost, sell, profit, loss;
    printf("Enter the selling price: ");
    scanf("%f", &sell);

    printf("Enter the cost: ");
    scanf("%f", &cost);

    if( cost > sell){
        printf("LOSS");
        loss = ((cost - sell)/cost) * 100;
        printf("Loss percent: %f \n", loss);
    }
    else if(cost < sell){
        printf("PROFIT");
        profit = ((sell - cost)/cost)*100;
        printf(" Profit percent: %f \n", profit);
    }
    else if(cost == sell){
        printf("No PROFIT or LOSS");
    }
    else{
        printf("INVALID OUTPUT");
    }
}