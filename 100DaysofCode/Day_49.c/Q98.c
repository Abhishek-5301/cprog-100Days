//Q98: Print initials of a name with the surname displayed in full. /* Sample Test Cases: Input 1: John David Doe Output 1: J.D. Doe */
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], words[10][20];
    int i = 0, j = 0, k = 0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            words[k][j] = '\0';
            k++;
            j = 0;
        } else {
            words[k][j++] = name[i];
        }
    }
    words[k][j] = '\0';

    for (i = 0; i < k; i++)
        printf("%c.", words[i][0]);
    printf(" %s\n", words[k]);
    return 0;
}
