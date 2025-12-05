//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Array to store frequency of each character
    int i;
    char result = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';  // Convert char to index (0–25)

        if (freq[index] == 1) {   // If already seen once, it's repeating
            result = str[i];
            break;
        }
        freq[index]++;
    }

    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
