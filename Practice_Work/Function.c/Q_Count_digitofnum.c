#include <stdio.h>

int countDigits(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of digits: %d\n", countDigits(n));
    return 0;
}

int countDigits(int n) {
    if (n < 0)            // handle negative numbers
        n = -n;
    if (n == 0)           // base case: 0 has 1 digit
        return 1;
    // recursive case for positive n
    if (n < 10)           // optional small optimization
        return 1;
    return 1 + countDigits(n / 10);
}
