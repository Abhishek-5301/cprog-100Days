// Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    // Find the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;  // Not a palindrome
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
