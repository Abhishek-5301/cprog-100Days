// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j; 
    for (i = 5; i >= 1; i--) {        // Outer loop → controls starting number
        for (j = i; j <= 5; j++) {    // Inner loop → prints numbers from i to 5
            printf("%d", j);
        }
        printf("\n");  // Move to next line after each row
    }
    return 0;
}
