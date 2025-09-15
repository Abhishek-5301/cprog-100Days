//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

// #include <stdio.h>
// int main(){
//     int a, b, c;
//     printf("Enter the sides of traingle: ");
//     scanf("%d, %d, %d", &a, &b, &c);

//     if( a == b || b == c || a == c){
//         if( b == c && a == c){
//             printf("Equilateral");
//         }
//         else{
//             printf("Iscoseles");
//         }
//     }
//     else{
//         printf("Scalene");
//     }
        
//     return 0;
// }

//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>

int main() {
    int day;

    // Prompt the user to enter a number
    printf("Enter a number (1-7) to represent a day of the week: ");
    scanf("%d", &day);

    // Use the switch statement to determine and print the day
    switch (day) {
        case 1:
            printf("It's Monday.\n");
            break; // Exit the switch statement after this case
        case 2:
            printf("It's Tuesday.\n");
            break;
        case 3:
            printf("It's Wednesday.\n");
            break;
        case 4:
            printf("It's Thursday.\n");
            break;
        case 5:
            printf("It's Friday.\n");
            break;
        case 6:
            printf("It's Saturday.\n");
            break;
        case 7:
            printf("It's Sunday.\n");
            break;
        default: // Executed if none of the cases match
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}