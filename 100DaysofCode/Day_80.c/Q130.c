// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);

        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(fp, "%s %d %d", s[0].name, &s[0].roll, &s[0].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s[0].name, s[0].roll, s[0].marks);
    }

    fclose(fp);

    return 0;
}
