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

    printf("Enter a number (1-7) to represent a day of the week: ");
    scanf("%d", &day);

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