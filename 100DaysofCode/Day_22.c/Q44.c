// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>
#include<math.h>
int main (){
    float sum = 0.0;
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

     for (int i = 1; i <= x; i++) {
        if (i == 1)
            sum += 1.0;   // first term is 1
        else
            sum += (float)(2 * i - 1) / (2 * i);
    }

    printf("Sum of %dth term is %.1f \n", x, sum);
    return 0;
}