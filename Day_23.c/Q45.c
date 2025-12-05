//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>
int main(){
    int x;
    float term, sum = 0.00;
    printf("Enter the number: ");
    scanf("%d", &x);

    for( int i = 0; i <= x; i++){
        term = (2.00*i)/(4.0 * i - 1) ;
        sum += term;
    }
    printf("Approx sum: %.2f", sum);
    return 0;
}


