// Write a program to fid the largest and second largest elemetn in an array. 
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = -999999;  // assume very small number

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d\n", second_largest);

    return 0;
}
