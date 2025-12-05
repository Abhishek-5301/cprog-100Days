#include <stdio.h>

void swap(int *a, int *b); // Function declaration

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y); // Call by reference

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) { // Function definition
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
