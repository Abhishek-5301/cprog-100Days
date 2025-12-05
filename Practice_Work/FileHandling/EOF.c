#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Demo.txt", "r");  // Open the file in read mode
    
    // Check if the file exists or opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    char ch;
    ch = fgetc(fptr);  // Read one character

    if (ch == EOF) {
        printf("File is empty.\n");
    } else {
        printf("Character: %c\n", ch);
    }

    fclose(fptr);  // Close the file
    return 0;
}
// while ( ch != EOF){
// printf("%c", ch);
//ch = fgetc(fptr)
//}
//printf("\n");
//fclsoe(fptr);
