#include <stdio.h>
int main(){
    int n, positive = 0, negative = 0, zero = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array: ");
    for( int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    }

    for( int i = 0; i < n; i++){
        if( arr[i] > 0){
            positive += 1;
        }

        else if( arr[i] < 0){
            negative += 1;
        }

        else{
            zero += 1;
        }
    }

    printf(" postive = %d \n", positive);
    printf("negative= %d \n",negative);
    printf(" zero= %d \n", zero);

    return 0;
}