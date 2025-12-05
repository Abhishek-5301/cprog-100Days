// Write a program to count the number of vowels and consonansts in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    int vowels = 0;
    int consonants = 0;
    char str[200];

    printf("Enter a Sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        char c = str[i];

        // check if alphabet
        if (isalpha(c)) {

            // convert to lowercase for easy checking
            c = tolower(c);

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}


    

