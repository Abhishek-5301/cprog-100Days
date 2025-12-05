//Count even and odd number in an array. 
#include <stdio.h>
int main(){
    int n, Even_count = 0, odd_count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n );

    int arr[n];
    printf("Enter the elements: ");
    for( int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }

    for( int i = 0; i < n; i++){
        if( arr[i] % 2 == 0){
            Even_count += 1;
        }
        else{
            odd_count += 1;
        }
    }

    printf(" Even number = %d: Odd number = %d", odd_count, Even_count);
    return 0;
}