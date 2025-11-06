// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>
int main(){
    int units;
    printf("Enter the units: ");
    scanf("%d", &units);

    if( units <= 100 ){
        printf("Bill: %d", units * 5);
    }
    else if (units > 100 && units <= 200){
        printf("Bill: %d", 500 + ( 7 * ( units - 100)));
    }
    else if ( units > 200 && units <= 300){
        printf("Bill: %d", 500 + 700 + ( 10 *( units - 200)));
    }

    else if ( units>300){
        printf("Bill: %d", 500 + 700 + 1000+ 12*(units - 300));
            }
            return 0;
}