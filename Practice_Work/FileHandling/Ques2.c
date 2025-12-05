#include <stdio.h>

int main() {
    FILE *fptr = fopen("Test.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char name[100];
    int roll;
    float cgpa;

    printf("Enter the student's data (name roll cgpa): ");
    scanf("%s %d %f", name, &roll, &cgpa);

    fprintf(fptr, "Name: %s\nRoll: %d\nCGPA: %.2f\n", name, roll, cgpa);

    fclose(fptr);
    printf("Data written successfully!\n");

    return 0;
}
