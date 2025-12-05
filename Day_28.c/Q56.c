// Read and print elements of one-dimensional array.
#include <stdio.h>
int main(){
    int n;
   

    printf("Enter the size of array: ");
    scanf("%d", &n);

     int arr[n];

    printf("Enter the elements of array: ");
    for( int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf(" Output \n");
    for( int i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }
   return 0;
}