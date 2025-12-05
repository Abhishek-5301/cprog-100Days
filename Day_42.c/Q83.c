// Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    while (str[i] != '\0') {
        char ch = tolower(str[i]);  // Convert to lowercase for easy comparison
        if (ch >= 'a' && ch <= 'z') { // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
// Q83: Count vowels and consonants in a string.
#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    while (str[i] != '\0') {
        char ch = tolower(str[i]);  // Convert to lowercase for easy comparison
        if (ch >= 'a' && ch <= 'z') { // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
