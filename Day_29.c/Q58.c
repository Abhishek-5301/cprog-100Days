//Find the sum of array elements. 
#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the size of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: \n");
    for( int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for ( int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("The sum of %d elements is %d", n, sum);

    return 0;

}