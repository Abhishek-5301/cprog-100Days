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