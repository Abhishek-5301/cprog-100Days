//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);  // Read full sentence including spaces

    while (1) {
        // If space or end of string is found, end of a word
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';  // Terminate current word
            len = strlen(word);

            // Check if this word is the longest so far
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0; // Reset for next word
        } else {
            word[j++] = sentence[i]; // Build the current word
        }

        if (sentence[i] == '\0')
            break; // End of sentence

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}

