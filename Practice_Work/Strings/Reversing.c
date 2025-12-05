#include <stdio.h>
#include <string.h>

int main() {
    char str[200], str_reversed[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    // Remove newline if present
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length; i++) {
        str_reversed[i] = str[length - 1 - i];
    }

    str_reversed[length] = '\0';  // ✅ very important

    printf("Reversed String: %s\n", str_reversed);

    return 0;
}
