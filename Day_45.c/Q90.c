// Q90: Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // Convert lowercase to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   // Convert uppercase to lowercase
        i++;
    }

    printf("Toggled string: %s\n", str);
    return 0;
}
