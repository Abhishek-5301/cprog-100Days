// 2 numbers - a & b are written in a file. Write a program to repalce them with thier sum.
#include <stdio.h>

int main() {
    FILE *fptr;
    int a, b;

    // Step 1: Read two numbers from file
    fptr = fopen("Test.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    printf("Read numbers: %d and %d\n", a, b);

    // Step 2: Write their sum to the file
    fptr = fopen("Test.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(fptr, "Sum = %d\n", a + b);
    fclose(fptr);

    printf("File updated successfully.\n");
    return 0;
}
