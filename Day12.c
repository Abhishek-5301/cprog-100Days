// Q23: Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int day;
//     printf("Enter the days: ");
//     scanf("%d", &day);
    
//     if( day > 0 && day <= 5){
//         printf("Fine: %d", day * 2);
//     }

//     else if ( day> 5 && day <= 10){
//         printf("Fine: %d", (5 * 2) + ((day-5) * 4));
//     }
    
//     else if ( day > 10 && day <= 30){
//         printf(" Fine : %d", (10)+20+ ((day-10) * 6) );
//     }

//     else if ( day> 30 ){
//         printf("MEMBERSHIP CANCELLED");
//     }

//     return 0;
    
// }

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