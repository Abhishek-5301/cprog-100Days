//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int x, y, n = 1;   // initialize n
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= (x < y ? x : y); i++) {  // loop till smaller number
        if (x % i == 0 && y % i == 0) {
            n = i;   // store the latest common factor
        }
    }

    printf("HCF: %d\n", n);
    return 0;
}

