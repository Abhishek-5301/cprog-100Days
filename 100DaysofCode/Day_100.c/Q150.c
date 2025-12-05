// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    // Pointer points to structure
    ptr = &s;

    // Input using pointer
    printf("Enter Name: ");
    scanf(" %[^\n]", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    // Output using pointer
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
