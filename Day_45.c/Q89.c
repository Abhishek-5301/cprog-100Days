//Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);  // Space before %c to skip newline

    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d\n", count);
    return 0;
}
