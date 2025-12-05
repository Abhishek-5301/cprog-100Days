//Find the largest and second largest element in an array. 
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    int largest = arr[0];
    int secondLargest = -999999;  // or any very small number

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // update second largest
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("\nLargest element = %d\n", largest);
    printf("Second largest element = %d\n", secondLargest);

    return 0;
}
