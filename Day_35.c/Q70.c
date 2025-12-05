#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    int rotated[n];

    // Copy last k elements to the beginning
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }
